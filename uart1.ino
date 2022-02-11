int switchPin=10;
int x;
void setup()
{
  pinMode(switchPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(switchPin)==HIGH)
  {
    x = 1;
    Serial.write('1');
  }
  else
  {
    x = 0;
    Serial.write('0');
  }
}