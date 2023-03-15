# Car Sensor using Arduino Uno and HC-SR04 Ultrasonic Sensor

This project implements a car sensor using an Arduino Uno, HC-SR04 ultrasonic sensor, LED, and piezo buzzer. The sensor detects the distance between the car and any object behind (of any material doesn't have to be only metal) it and provides visual and audible warnings if the car gets too close to an obstacle.

## Components

- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Breadboard (Easier to wire everything)
- LED
- Piezo Buzzer
- Jumper Wires

## Scheme & Showcase

![image](https://user-images.githubusercontent.com/90192366/225453772-f2bc4265-647c-4dd5-9eed-ba8605661f4c.png)
(https://cdn.discordapp.com/attachments/898483803356561448/1085685017398743170/Recording_2023-03-15_230331.mp4)


# Instructions

## Hardware

1. LED & Piezo have to be connected to ground and one of the digital pins on Arduino board so that we can manipulate with them
2. HC-SR04 Ultrasonic Sensor has to be connected to VCC pin and ground pin so it can work properly since it is active sensor. Other two pins "TRIG" and "ECHO" have to be connected to one of digital pins from Arduino board

For easier wiring and connecting I highly suggest using breadboard!


## Software

1. Install the Arduino IDE on your computer if you haven't already done so.
2. Open the Arduino IDE and create a new project.
3. Copy and paste the code from the code.cpp from this repository to your IDE.
4. Upload the sketch to the Arduino Uno board.


## Usage

1. Power on the Arduino Uno board.
2. Place the HC-SR04 sensor at the rear of the car.
3. When the car is in reverse, the sensor will detect the distance between the car and any object behind it.
4. If the distance is less than a certain threshold (default is 20cm), the LED will light up and the piezo buzzer will produce a warning sound.
5. As the car gets closer to the obstacle, the frequency of the piezo buzzer sound will increase to indicate the proximity to the obstacle.

## Note

Distance can be changed from the code to closer range. Current distance between car and object has to be equal or less to 125cm. You can change exact distance (in centimeters) on line 26 in the if statement.

## Troubleshooting

1. If the LED does not light up or the piezo buzzer does not produce a sound, check your wiring connections and make sure the components are properly connected to the    Arduino Uno.
2. If the sensor readings are incorrect or unstable, make sure the sensor is properly positioned and there are no obstructions in front of it.

## Credits

This project was inspired by the HC-SR04 example project in the Arduino IDE and modified to include a visual and audible warning system. The code was written by charon.
