                                             4-Bit Adder-Subtractor Calculator
                                             
Description: This project implements a 4-bit two's complement adder-subtractor calculator using basic digital logic gates. The design demonstrates the construction of arithmetic circuits without using dedicated full-adder ICs.
The calculator performs both addition and subtraction on signed 4-bit binary numbers by utilizing:
•	XOR gates for conditional bit inversion
•	Full adder logic built from basic gates
•	Two's complement arithmetic
•	Ripple-carry architecture
## Features
* 4-bit signed integer arithmetic
* Addition and subtraction operations
* Two's complement representation
* Built entirely from:
  * AND gates
  * OR gates
  * XOR gates
  * NOT gates
* No dedicated full-adder chips used
* Hardware implementation on a breadboard
* Digital logic simulation and verification

---

                                                                 Theory
Full Adder Equations
For each bit position:
Sum Output: S_n = A_n XOR X_n XOR C_n
Carry Output: C_n+1 = A_nX_n + C_n(A_n XOR X_n)
where: 
(An) = input bit from operand A
(Bn) = input bit from operand B
(Cn) = carry-in
(Sn) = sum output
(Cn+1) = carry-out

                                                         Adder-Subtractor Design
Subtraction is implemented using two's complement arithmetic.
An intermediate signal is defined as:   
where:
•	Cin = 0 - Addition
•	Cin = 1  -  Subtraction

This allows the same circuit to perform both operations.

                                                              Simulation
The circuit was first designed and verified using a digital logic simulator.
Simulation included:
•	Four cascaded full adders
•	Shared XOR logic for optimization
•	Addition mode (Cin = 0)
•	Subtraction mode (Cin = 1)
•	Verification of carry propagation

                                                         Hardware Implementation
The simulated design was implemented on a breadboard using TTL logic ICs.
Components Used:
•	74LS86 (XOR)
•	74LS08 (AND)
•	74LS32 (OR)
•	74LS04 (NOT)
•	LEDs for output display
•	Toggle switches for inputs
•	Pull-up/pull-down resistors
•	Breadboard and jumper wires

                                                            Hardware Features
•	Four-bit operand input
•	Operation select switch
•	LED output display
•	Ripple-carry full-adder chain
•	Real-time arithmetic computation

