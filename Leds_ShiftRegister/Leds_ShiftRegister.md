# 8 LED Shift Register Project with 74HC595

## Overview
This project demonstrates controlling 8 LEDs using an Arduino and a 74HC595 shift register chip. The code lights up each LED sequentially with a delay, 
showcasing how to expand output pins using a shift register.

## Components Used
- Arduino UNO (Elegoo Starter Kit)
- 74HC595 Shift Register
- 8 LEDs
- 8 220 ohm current-limiting resistors
- Breadboard and jumper wires

## How It Works
The Arduino sends serial data to the 74HC595 chip, which then outputs the data to the LEDs in parallel. By toggling the clock and latch pins, 
the LED pattern is updated. 

## Troubleshooting
During testing, I encountered an issue where the LEDs did not light up as expected. After verifying the wiring and code multiple times, 
I suspect the 74HC595 chip might be faulty. Despite this, the code and setup demonstrate how to control LEDs using a shift register.

## Notes
- Ensure proper power and ground connections to the shift register.
- Connect Output Enable (OE) to ground and Master Reset (MR) to 5V.
- Double-check LED polarity and resistor placement.

## Future Improvements
- Replace the 74HC595 chip and retest.
- Add more complex LED patterns.
- Explore cascading multiple shift registers.

---
