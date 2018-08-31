#include <Servo.h>

int servoPin = 10;

Servo servo1;

void setup(){
	servo1.attach(servoPin);
}

void loop(){
	servo1.write(0);
  	delay(5000);
  	
  	servo1.write(90);
  	delay(5000);
  	
  	servo1.write(180);
  	delay(5000);
}