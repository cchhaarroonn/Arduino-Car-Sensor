# Car Sensor using Arduino Uno and HC-SR04 Ultrasonic Sensor

This project implements a car sensor using an Arduino Uno, HC-SR04 ultrasonic sensor, LED, and piezo buzzer. The sensor detects the distance between the car and any object behind (of any material doesn't have to be only metal) it and provides visual and audible warnings if the car gets too close to an obstacle.

## Components

- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Breadboard (Easier to wire everything)
- LED
- Piezo Buzzer
- Jumper Wires

# Instructions

## Hardware



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
