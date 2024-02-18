#include <iostream>
#include <signal.h>
#include <stdio.h>

#include "lib/SaraKIT/devices.hpp"

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
    BLDCMotor_On(0,true);

    BLDCMotor_IdleTorque(0, 0, 2500);

    while (1) {
        BLDCMotor_MoveByAngle(0, 180, 0.50, 40, true);
        sleepms(1500);
        BLDCMotor_MoveByAngle(0, -180, 0.50, 40, true);
        sleepms(1500);
    }
    return 1;
}
