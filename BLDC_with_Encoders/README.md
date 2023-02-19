# SaraKIT_BLDC_DEMO
*BLDC Gimbal Motors with encoders*

Using Raspberry PI with SaraKIT, AS5048A Encoder with Brushless Motor Controllers (BLDC)

This demo shows how to use one of the encoders included in the SaraKIT (AS5048A) based on the Raspberry PI CM4 to control another gimbal in a synchronous manner.

Using Raspberry PI with SaraKIT with Brushless Motor Controllers (BLDC)

This demo shows how to use SaraKIT based on the Raspberry PI CM4 to control another gimbal in a synchronous manner.
By turning the gimbal in which the encoder is, I rotate the second gimbal in the same way.

A Guide to Using BLDC Motors (Gimbals) with SaraKIT: A Comparison of Stepper Motors, Servos, and BLDC Motors:
![VideoAboutBLDC](https://youtu.be/Nwvnoo5efzE)


run:
github clone .... GimbalsDemo

cd GimbalsDemo/BLDCDemo1
>make
>./gimbals

##explanation of how the program works

//set the number of pole pairs - read from the datasheet of the purchased motor
BLDCMotor_PolePairs(0,11);

//run once, get info e.g.: Decoder 0 zeroAngle=3.534422 direction=-1
//BLDCMotor_InitFOC(0,0,0,0);
//return 1;
//and paste below
BLDCMotor_InitFOC(0, 0, -1, 3.534422);

BLDCMotor_On(0,true);

//turn on the motor controller 0
BLDCMotor_IdleTorque(0, 0, 2500);

while (1) {
    //rotate motor 0 by 25 degrees with speed 0.15 and torque 40%
    BLDCMotor_MoveByAngle(0, 25, 0.15, 40, true);
    sleepms(1500);
    //rotate motor 0 by -25 degrees with speed 0.15 and torque 40%
    BLDCMotor_MoveByAngle(0, -25, 0.15, 40, true);
    sleepms(1500);
}
return 1;



[SaraKIT](https://SaraKIT.SaraAI.com)

