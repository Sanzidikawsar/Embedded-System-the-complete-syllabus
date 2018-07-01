void setup()
{
  pinMode(A1, INPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  int light = analogRead(A1);
  analogWrite(13, light);
  
  Serial.begin(9600);
  Serial.println(light);
}