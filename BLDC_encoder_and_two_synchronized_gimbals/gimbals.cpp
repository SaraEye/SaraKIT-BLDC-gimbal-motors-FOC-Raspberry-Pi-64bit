#include <iostream>
#include <signal.h>
#include "unistd.h"
#include <stdio.h>
#include <arm_neon.h>

#include "lib/SaraKIT/devices.hpp"
#include <wiringPi.h>

using namespace std;
 
//ctrl-c 
void ctrlc_handler(sig_atomic_t s){
    printf("\nCaught signal %d\n",s);
    BLDCMotor_MoveStop(0);
    BLDCMotor_MoveStop(1);
    exit(1);
}

int main(int argc, char** argv){
    signal(SIGINT,ctrlc_handler);

    //set gimbals pole
    BLDCMotor_PolePairs(0,11);
    BLDCMotor_PolePairs(1,11);	

//run once, get info
//BLDCMotor_InitFOC(0,0,0,0);
//return 1;
//and paste below
    BLDCMotor_InitFOC(0, 0, -1, 3.53);

    BLDCMotor_On(0,true);
	BLDCMotor_On(1,true);

    while (1) {
		float e0=-Encoder_Get(0).angle;
        BLDCMotor_MoveToAngle(1, e0*RAD_TO_DEG, 1, 50, true);
        sleepms(1);
    }
    return 1;
}
