void setup()
{
  pinMode(A1, INPUT);
  pinMode(11, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  int light = analogRead(A1);
  analogWrite(11, light);
  
  Serial.println(light);
}
