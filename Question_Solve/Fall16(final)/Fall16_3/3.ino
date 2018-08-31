void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void led(){
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
delay(500);
}


void loop()
{
  String content = "";
  char character;

  while(Serial.available()) {
      character = Serial.read(); //Reading the char
      content.concat(character); //Added to the string
  }

  if (content != "") {
    int i;
    int n = (int)character - 48;
    Serial.print(n);
    for(i=0; i<n;i++){
    led();
     
    }
  }
}