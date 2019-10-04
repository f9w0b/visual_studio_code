#include <Arduino.h>
#define onboard 13

void setup() {
  pinMode(onboard,OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:
}



void loop() {
  
  delay(1000);
  digitalWrite(onboard,LOW);
  delay(1000);
  digitalWrite(onboard,HIGH);
  Serial.println("working ");
   
  // put your main code here, to run repeatedly:
}