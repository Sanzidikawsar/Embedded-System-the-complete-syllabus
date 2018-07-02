void setup(){
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  float temp = analogRead(A0);
  temp = temp *0.48;
  Serial.println(temp);
  
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);

  if (temp >35){
    digitalWrite(11, HIGH);
  }else{
    digitalWrite(11,LOW);
  }
  delay(1000);
}

