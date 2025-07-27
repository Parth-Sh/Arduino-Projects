# Button-Controlled LED Project

This is a simple Arduino project that uses two push buttons to control an LED.  
- Button A turns the LED 'ON' .
- Button B turns the LED 'OFF'.

# Components Used:
- 2 × Push Button 
- 1 × LED
- 1 × 220O Resistor (for LED)
- 7 Jumper Wires
- Arduino Uno R3 (or similar)

# How it works:
- Button A: When pressed, the state of pin 9 changes to `LOW`, which turns on the LED connected to pin 5.
- Button B: When pressed, the state of pin 8 changes to `LOW`, which turns off the LED connected to pin 5.
- The push buttons use the 'internal pull-up resistors' on the Arduino, so no extra resistors are required for the buttons.
