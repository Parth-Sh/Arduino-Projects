# 4-Bit Adder-Subtractor Calculator Using Full-Adder ICs
## Overview
This project implements a 4-bit Adder-Subtractor Calculator capable of performing signed binary addition and subtraction using Full-Adder ICs and XOR gates. This demonstrates how two's complement arithmetic can be used to perform subtraction using the same hardware used for addition.
The project includes both a digital simulation and a physical hardware implementation on a breadboard.

## Features

* 4-bit signed arithmetic
* Binary addition and subtraction
* Two's complement subtraction
* Ripple-carry architecture
* Implemented using:
  * Full-Adder ICs
  * XOR gates
* Simulation and hardware verification
* LED output display

## Theory of Operation
The calculator uses four cascaded full-adder stages.

## Circuit Architecture

Each bit stage contains:

* One XOR gate
* One Full-Adder

Four stages are connected together to form a 4-bit ripple-carry adder-subtractor.

## Simulation

The circuit was first implemented and tested in SimUAid.

## Hardware Implementation

The simulated design was implemented on a breadboard using Full-Adder and XOR ICs.

### Components Used

* Full-Adder IC(s)
* XOR Gate IC(s)
* LEDs
* Toggle switches
* Breadboard
* Jumper wires
* Pull-up/Pull-down resistors

### Hardware Features

* 4-bit operand inputs
* Addition/Subtraction mode selection
* LED result display
* Real-time arithmetic operation
## Author

**[Your Name]**

Digital Logic Design Laboratory Project

