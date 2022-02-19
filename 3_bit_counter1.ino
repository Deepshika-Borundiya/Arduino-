int ledmsb = 13;
int ledmid = 12;
int ledlsb = 11;
int switchpin = 10;
boolean lastbutton = LOW;
void setup()
{
  pinMode(ledmsb, OUTPUT);
  pinMode (ledmid, OUTPUT);
  pinMode(ledlsb, OUTPUT);
  pinMode(switchpin, INPUT);
}

void loop()
{
  if (digitalRead(switchpin) == HIGH && lastbutton == LOW)
  {
    for(int i=0; i<2; i++)
    {
      for(int j=0; j<2; j++)
      {
        for(int k=0; k<2; k++)
        {
          digitalWrite(ledmsb,i);
          digitalWrite(ledmid,j);
          digitalWrite(ledlsb,k);
          lastbutton = !lastbutton;
          delay (1000);
        }
      }
    }
  }
  else 
  {
    lastbutton = LOW;
    digitalWrite( ledmsb, LOW);
    digitalWrite( ledmid, LOW);
    digitalWrite( ledlsb, LOW);
  }
}