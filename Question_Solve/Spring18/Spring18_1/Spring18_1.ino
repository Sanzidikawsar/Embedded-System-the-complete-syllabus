void setup(){
  pinMode(2,INPUT);
  pinMode(3, OUTPUT);  
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(13, OUTPUT);
  digitalWrite(2, LOW);
  delay(3000);
  Serial.begin(9600);
}

void loop(){
  int pir = digitalRead(2);
  
  if (pir == HIGH){
    digitalWrite(13, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
  }else{
    digitalWrite(4, LOW);
    digitalWrite(13, HIGH);
    delay(5000);
  }
}
