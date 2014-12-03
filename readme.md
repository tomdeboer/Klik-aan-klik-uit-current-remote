Klik-aan-klik-uit remote control with CT-sensor
---

***Note: This project is currently a work in progress; not all systems are functional..***

The goal of this project is to provide a blueprint for building a klik-aan-klik-uit remote with a current sensing input. The current input is provided by a general CT-sensor and generates a voltage that is picked up by the microcontroller. If a current is detected, the klik-aan-klik-uit switch is switched on. The opposite happens when the current is removed. Additionally, the generated power can be used to charge a lithium cell.

The system is built using widely available components and parts and cane be easily created. The source code at this point contains some uC specific (ATtiny85) control logic, but at some point in the future other uC's will be supported. It is easy to add your own anyway.

#### Getting Started
For ease of use, the code was made with the Arduino platform in mind. So first of all, make sure you have the appropriate Arduino libraries installed. The following libraries are important:

- LowPower [(link)](https://github.com/rocketscream/Low-Power)
- RCSwitch [(link)](https://code.google.com/p/rc-switch/)

Using RCSwitch together with an ATtiny and the Arduino IDE (on OSX), I ran into a nasty bug in the AVR Linker provided with the Arduino IDE (1.0.6). Fortunately, this problem is not hard to fix. [Just read to this post and follow the instructions.](https://code.google.com/p/arduino-tiny/issues/detail?id=58#c5)


#### Sources
[Programming an ATtiny w/ Arduino 1.0](http://highlowtech.org/?p=1695)

#### BOM
*to be done...*

Something around $10, excluding board manufacturing and delivery costs.
