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

//run once, get info
//BLDCMotor_InitFOC(0,0,0,0);
//return 1;
//and paste below
    BLDCMotor_InitFOC(0, 0, -1, 3.53);

    BLDCMotor_On(0,true);

    while (1) {
        BLDCMotor_MoveByAngle(0, 25, 0.15, 40, true);
        sleepms(1500);
        BLDCMotor_MoveByAngle(0, -25, 0.15, 40, true);
        sleepms(1500);
    }
    return 1;
}
