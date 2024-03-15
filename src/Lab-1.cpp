

#include <Arduino.h>
#include <HC-SR04.h>


void setup() 
{
  Serial.begin(115200);
  Serial.print("Welcome!\n");
  pinMode(A0,INPUT);
  pinMbode(13,OUTPUT);
  }

void loop()
{

  digitalWrite(13,!digitalRead(A0));

}
