int ledPin=10;
char data;
void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available())
  {
    data = Serial.read();
    if (data == '1')
    {
      digitalWrite (ledPin,HIGH);
    }
    else if(data == '0')
    {
      digitalWrite (ledPin,LOW);
    }
  }
}