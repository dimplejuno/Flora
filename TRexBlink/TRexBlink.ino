/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
*/
// Pin 10 has an LED connected on most Arduino boards.
// give it a name:
int ledPin = 6;
int floraPin = 7;

int timeOfDelay = 200;

// the setup routine runs once when you press reset:
void setup() {
        // initialize the digital pin as an output.
        pinMode(ledPin, OUTPUT);
        pinMode(floraPin, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  
 // timeOfDelay = random(1000);
  
        digitalWrite(ledPin,HIGH);        // turn the LED on (HIGH is the voltage level)
        digitalWrite(floraPin,HIGH);        // turn the LED on (HIGH is the voltage level)
        delay(timeOfDelay);                      // wait for a second
        digitalWrite(ledPin,LOW);         // turn the LED off by making the voltage LOW
        digitalWrite(floraPin,LOW);        // turn the LED on (HIGH is the voltage level)
        delay(1000);                      // wait for a second
}

