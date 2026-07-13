# Wiring Plan

## TB6612FNG Motor Driver

Motor A:
- Motor wire 1 → A01
- Motor wire 2 → A02

Motor B:
- Motor wire 1 → B01
- Motor wire 2 → B02

Power:
- Battery + → VM
- Battery - → GND
- Arduino GND → GND
- Arduino 5V → VCC

Control pins: 
- PWMA → Arduino pin 5
- AIN1 → Arduino pin 7
- AIN2 → Arduino pin 8
- PWMB → Arduino pin 6
- BIN1 → Arduino pin 9
- BIN2 → Arduino pin 10
- STBY → Arduino pin 11

Important:
Arduino GND, battery negative, and motor driver GND must share a common ground. 
    

