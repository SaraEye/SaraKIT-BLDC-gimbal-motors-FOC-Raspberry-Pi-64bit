# SaraKIT_BLDC_DEMO

This demo demonstrates the use of SaraKIT, which is based on the Raspberry Pi CM4, to control BLDC Gimbal Brushless Motors with and without encoders.<br>
*Attention, BLDC motors get very hot, do not leave them running at too high power - there is a risk of burns and fire!*

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

## BLDC Encoder and two synchronized gimbals

![SaraKIT_field_oriented_control_FOC](https://user-images.githubusercontent.com/35704910/220133540-a8d33283-8703-42f1-8bd1-8213652b9dcb.gif)

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

This is exactly that part of the movie: [YouTube Link](https://youtu.be/Nwvnoo5efzE?t=607)

## A Guide to Using BLDC Motors (Gimbals) with SaraKIT: A Comparison of Stepper Motors, Servos, and BLDC Motors

[YouTube Video about SaraKIT and BLDC driver](https://youtu.be/Nwvnoo5efzE)

## See more

### SaraKIT - Self Balancing Robot
Example of use, demonstration of the speed and power of BLDC motors<br>
<div align="center">
  <a href="https://saraai.com/_SaraKIT/video/SaraKIT_Self_Balancing_Robot_with_Raspberry_Pi4.mp4"><img src="https://saraai.com/_SaraKIT/images/sbr.jpg" width=50% alt="IMAGE ALT TEXT"></a>
</div>
<br>

## Video with a ready example using Lego bricks:
<div align="center">
  <a href="https://saraai.com/_SaraKIT/video/SaraKIT_Lego_RC_Car.mp4"><img src="https://saraai.com/_SaraKIT/images/LegoRCCar.jpg" width=50% alt="IMAGE ALT TEXT"></a>
</div>

### SaraKIT - Color Tracking:

![SaraKIT_ColorTracking](https://github.com/SaraEye/SaraKIT-Face-Tracking-MediaPipe-Raspberry-Pi-64bit/assets/35704910/7120ee8a-7612-4d82-8a3c-8cf38c451009)

[Video Link](https://saraai.com/_SaraKIT/video/SaraKIT_ColorTracking.mp4)

### SaraKIT - Face Detection, Face Mesh:

![SaraKIT_Face](https://github.com/SaraEye/SaraKIT-Face-Tracking-MediaPipe-Raspberry-Pi-64bit/assets/35704910/5aebf67d-e821-4c28-b48f-2b3540df5b75)

[Video Link](https://saraai.com/_SaraKIT/video/SaraKIT_Face.mp4)

### SaraKIT - Object Detection:

![SaraKIT_Object_Detection](https://github.com/SaraEye/SaraKIT-Face-Tracking-MediaPipe-Raspberry-Pi-64bit/assets/35704910/e76bcf47-3d1c-4179-a330-c69601f94a8a)

[Video Link](https://saraai.com/_SaraKIT/video/SaraKIT_Object_Detection.mp4)

## SaraAI LLC

Website: [https://SaraAI.com](https://SaraAI.com)<br>
Project Page: [https://SaraKIT.SaraAI.com](https://SaraKIT.SaraAI.com)
