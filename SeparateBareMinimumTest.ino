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
 
// Values defined in CONFIG.h
const char secret[] = SECRET;
const char hostname[] = HOSTNAME;
byte mac[] = MAC;
byte ip[] = IP;
byte gateway[] = GATEWAY;
byte server[] = SERVER;

int pushButton = 2;
/*
 * SETUP - // put your setup code here, to run once:
 */
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);  

}

/*
 * LOOP - // put your main code here, to run repeatedly:
 */
void loop() {
  // read the input pin:
  int buttonState = digitalRead(pushButton);
  // print out the state of the button:
  Serial.println(buttonState);
  delay(1);        // delay in between reads for stability

}
