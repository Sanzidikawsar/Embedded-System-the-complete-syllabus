void setup()
{
  pinMode(2, INPUT);
  pinMode(9, OUTPUT);
  
  digitalWrite(2, LOW);
  
  Serial.begin(9600);
  Serial.println("Doing.. ");
  
  delay(30000);
}

void loop()
{
  int pir = digitalRead(12);
  
  if(pir == HIGH){
    digitalWrite(9, HIGH);
  	delay(1000);
  }
  else{
    digitalWrite(9, LOW);
  }
}
