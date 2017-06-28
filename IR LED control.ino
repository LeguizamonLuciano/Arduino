#include <NECIRrcv.h>
#include <Servo.h>
NECIRrcv ir(4);

  void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  ir.begin();
}

void loop() {
  unsigned long irCode;
  while(ir.available())
  {
    irCode = ir.read();
    if(irCode==3927310080)
      digitalWrite(13,HIGH);
    if(irCode==3125149440)
      digitalWrite(13,LOW);
    if(irCode==3108437760)
    {
      while(irCode!=3125149440)
      {
        digitalWrite(13,HIGH);
        delay(250);
        digitalWrite(13,LOW);
        delay(250);
        irCode = ir.read();
      }  
    }

  }
  if(irCode!=0)
  Serial.println(irCode);
}
