Klik-aan-klik-uit remote control with CT-sensor
---

The goal of this project is to provide a blueprint for building a klik-aan-klik-uit remote with a current sensing input. The current input is provided by a general CT-sensor and generates a voltage that is picked up by the microcontroller. If a current is detected, the klik-aan-klik-uit switch is switched on. The opposite happens when the current is removed. Additionally, the generated power can be used to charge a lithium cell.

The system is built using widely available components and parts and cane be easily created. The source code at this point contains some uC specific (ATtiny85) control logic, but at some point in the future other uC's will be supported. It is easy to add your own anyway.

#### Getting Started
For ease of use, the code was made with the Arduino platform in mind. So first of all, make sure you have the appropriate Arduino libraries installed. The following libraries are important:

- LowPower [(link)](https://github.com/rocketscream/Low-Power)
- RCSwitch [(link)](https://code.google.com/p/rc-switch/)

Using RCSwitch together with an ATtiny and the Arduino IDE (on OSX), I ran into a nasty bug in the AVR Linker provided with the Arduino IDE (1.0.6). Fortunately, this problem is not hard to fix. [Just read to this post and follow the instructions.](https://code.google.com/p/arduino-tiny/issues/detail?id=58#c5)

Another bug in the Arduino environement is the lack of ```delayMicroseconds``` support at 1Mhz. Since the Tiny85 runs on 1Mhz (8Mhz internal chrystal with prescaler), the RCSwitch code doesn't work. There are two ways to fix this. Either select the Tiny 8Mhz board from the board menu (easiest). Or fix the code in the Arduino installation directory. A bug report has already been made, but there are no signs of it being fixed.

Bug report: [#1678: delayMicroseconds(): added support for 1Mhz, 12Mhz and 24Mhz](https://github.com/arduino/Arduino/pull/1678)

To use the ATtiny with the Arduino IDE, please install: [arduino-tiny - ATtiny core for Arduino](https://code.google.com/p/arduino-tiny/)

#### BOM

[RF Transmitter - 434MHz € 3,95](https://iprototype.nl/products/components/communications/rf-transmitter-434mhz)

[ATtiny85 - 20PU € 1,95 ](https://iprototype.nl/products/components/ics/attiny85-20pu)



**Total:** Something around $10, excluding board manufacturing and delivery costs.

*...to be continued...*
O