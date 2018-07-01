void setup()
{
  pinMode(A1, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int temp = analogRead(A1);
  float value = (temp * 0.48);
  
  Serial.println(value);
}