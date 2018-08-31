void setup(){
  pinMode(8, OUTPUT);
}

void loop(){
  tone(8, 1000); 
  delay(1000);
  
  noTone(8);     
  delay(1000);     
  
}