void setup()
{
  pinMode(12, INPUT);
  pinMode(13, OUTPUT);
  
  digitalWrite(4, LOW);
  
  Serial.begin(9600);
  Serial.println("Doing.. ");
  
  delay(30000);
}

void loop()
{
  int pir = digitalRead(12);
  
  if(pir == HIGH){
    digitalWrite(13, HIGH);
  	delay(1000);
  }
  else{
    digitalWrite(13, LOW);
  }
}