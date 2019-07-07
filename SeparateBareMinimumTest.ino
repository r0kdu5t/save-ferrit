/**
 * Program definition sentence - objectives
 * 
 * ADD LICENSE here ==>
 * 
 */

/*
 * INCLUDES
 */
#include "CONFIG.h"

/*
 * CONFIGURATION bits
 */

// constants won't change. Used here to set a pin number:
const int ledPIN = 3;  // the number of the LED pin
const long interval = 500;           // interval at which to blink (milliseconds)
 
// Values defined in CONFIG.h
const char secret[] = SECRET;
const char hostname[] = HOSTNAME;
byte mac[] = MAC;
byte ip[] = IP;
byte gateway[] = GATEWAY;
byte server[] = SERVER;

// Variables will change:
int ledState = LOW;             // ledState used to set the LED

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis = 0;        // will store last time LED was updated

int pushButton = 2;       // As described on pin D2
/*
 * SETUP - // put your setup code here, to run once:
 */
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
  // set the digital pin as output:
  pinMode(ledPIN, OUTPUT);
    digitalWrite(ledPIN, HIGH);  

}

/*
 * LOOP - // put your main code here, to run repeatedly:
 */
void loop() {
  // read the input pin:
  int buttonState = digitalRead(pushButton);
  // print out the state of the button:
  Serial.println(buttonState);
  if ( buttonState == HIGH ) {
    z_BlinkWithoutDelay();
  }
  delay(1);        // delay in between reads for stability

}
