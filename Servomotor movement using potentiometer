Mover servo con pote

#include <Servo.h>
Servo s1;
int botonRead;

  void setup() {
  s1.attach(6,500,2320); //pin,pulsoMin,pulsoMax
}

void loop() {
  int pote=analogRead(A4);
  int angulo=map(pote,0,1023,0,180);
  s1.write(angulo);
}
