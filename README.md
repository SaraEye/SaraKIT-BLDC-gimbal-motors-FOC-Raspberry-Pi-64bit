# SaraKIT_BLDC_DEMO

This demo demonstrates the use of SaraKIT, which is based on the Raspberry Pi CM4, to control BLDC Gimbal Brushless Motors with and without encoders.

## BLDC Gimbal Motors without encoders

simple demo, turn the motor 25 degrees

```bash
git clone https://github.com/SaraEye/SaraKIT-BLDC-gimbal-motors-FOC-Raspberry-Pi-64bit GimbalsDemo
cd GimbalsDemo/BLDC_without_encoder
make
./gimbals
```

## BLDC Gimbal Motors with encoders

simple demo, turn the motor 25 degrees

```bash
git clone https://github.com/SaraEye/SaraKIT-BLDC-gimbal-motors-FOC-Raspberry-Pi-64bit GimbalsDemo
cd GimbalsDemo/BLDC_with_encoder
make
./gimbals
```

## BLDC Gimbal Motors with encoders

![image](https://user-images.githubusercontent.com/35704910/220132992-9ca8f915-35ab-49c2-9cc2-d8ba028073b3.png)

Using Raspberry PI with SaraKIT, AS5048A Encoder with Brushless Motor Controllers (BLDC)

This demo shows how to use one of the encoders (e.g. AS5048A) with SaraKIT and Raspberry PI CM4 to control another gimbal in a synchronous manner.
By turning the gimbal in which the encoder is, I rotate the second gimbal in the same way.
Of course, you can use the AS5048A decoder itself by connecting it via PWM to one of the two connectors on the SaraKIT board.

```bash
git clone https://github.com/SaraEye/SaraKIT-BLDC-gimbal-motors-FOC-Raspberry-Pi-64bit GimbalsDemo
cd GimbalsDemo/BLDC_encoder_and_two_synchronized_gimbals
make
./gimbals
```

this is exactly the moment in the movie: https://youtu.be/Nwvnoo5efzE?t=607

## A Guide to Using BLDC Motors (Gimbals) with SaraKIT: A Comparison of Stepper Motors, Servos, and BLDC Motors:

[YouTube Video about SaraKIT and BLDC driver](https://youtu.be/Nwvnoo5efzE)


[https://SaraKIT.SaraAI.com](https://SaraKIT.SaraAI.com)

