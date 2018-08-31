#include <Servo.h>
Servo servo1;

void setup()
{
  pinMode(2, INPUT);  
  digitalWrite(2, LOW);
  
  servo1.attach(10);
  
  pinMode(A2, INPUT);
}

void loop()
{
  int pir = digitalRead(2);
  
  if(pir == HIGH){
    servo1.write(0);
  	delay(5000);
    
    servo1.write(180);
  	delay(5000);
  }
  else{
    servo1.write(0);
  }
  
  
  int ldr = analogRead(A2);
  	
  if(ldr > 500){
  	servo1.write(0);
  	delay(5000);
    
    servo1.write(180);
  	delay(5000);
  }
  
  else{
    servo1.write(0);
  }
}