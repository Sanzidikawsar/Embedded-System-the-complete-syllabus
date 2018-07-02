int brightness = 0;

void setup()
{
  pinMode(9, OUTPUT);
  pinMode(3, INPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  float temp = analogRead(A0);
  temp = temp * 0.48;
  Serial.println(temp);
  if (temp > 50){
    if (digitalRead(3) == HIGH){
   for (brightness = 255; brightness >= 0; brightness -= 5) {
    analogWrite(9, brightness);
    delay(30);
   }
    } 
  }else{
    digitalWrite(9,LOW);
  }
  }
