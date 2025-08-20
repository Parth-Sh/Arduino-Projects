# Proximity Alert System
This Arduino project uses an ultrasonic sensor (HC-SR04) to measure distance and activates a buzzer when an object is detected within 10 cm.

## Components Used
- Arduino Uno R3 
- Ultrasonic Sensor
- Active Buzzer
- Jumper Wires
- Breadboard

## How It Works
- The ultrasonic sensor sends out an ultrasonic pulse.
- It waits for the echo to return and calculates the distance.
- If an object is closer than or equal to 10 cm, the buzzer turns ON.
- Otherwise, the buzzer remains OFF.
- Distance is printed to the Serial Monitor.
