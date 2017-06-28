#include <Servo.h>
Servo s1;
int botonRead;

  void setup() {
  s1.attach(6,500,2320); //pin,pulsoMin,pulsoMax
  pinMode(3,INPUT);
 
}

void loop() {
   botonRead=digitalRead(3);
  if(botonRead)
  {
    s1.write(0);
    delay(500);
    s1.write(90);
    delay(2000);
  }
  else
  s1.write(0);
}
