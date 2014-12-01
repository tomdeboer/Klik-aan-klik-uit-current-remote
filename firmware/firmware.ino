// **** INCLUDES *****
#include "LowPower.h"
#include <avr/sleep.h>
#include <avr/interrupt.h>

// Use pin 2 as wake up pin
const int wakeUpPin = 4;
const int dataPin   = 3;

void wakeUp()
{
    digitalWrite(dataPin, digitalRead(wakeUpPin));
}

void setup()
{
    // Configure wake up pin as input.
    // This will consumes few uA of current.
    pinMode(wakeUpPin, INPUT);   
    pinMode(dataPin, OUTPUT);   
      
    GIMSK |= (1<<PCIE); // Turn on Pin Change interrupt
    PCMSK |= (1<<PCINT4); // Which pins are affected by the interrupt

}

void loop() 
{
    // Enter power down state with ADC and BOD module disabled.
    // Wake up when wake up pin is low.
   LowPower.powerDown(SLEEP_FOREVER, ADC_OFF, BOD_OFF);
   wakeUp();
//  digitalWrite(dataPin, digitalRead(wakeUpPin));
}

ISR(PCINT0_vect) {
//  wakeUp();
}