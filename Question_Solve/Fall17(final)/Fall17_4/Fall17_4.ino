void setup(){
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  
  pinMode(13, OUTPUT);
  
  pinMode(A1, INPUT);
  
  pinMode(9, OUTPUT);
  
  Serial.begin(9600);
}

void loop(){
  int temp = analogRead(A1);
  float value = (temp * 0.48);
  
  Serial.println(value);
  
  if(value > 35 && value < 45){
  	digitalWrite(12, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, LOW);
        
    digitalWrite(13, HIGH);
    delay(5000);
  }
  
  else if(value < 20){    
    digitalWrite(2, HIGH);
    delay(5000);
  }
  
  
  if(value > 45){
    tone(9, 30000); 
  	delay(30000);
  
  	noTone(9);     
  }
  
}