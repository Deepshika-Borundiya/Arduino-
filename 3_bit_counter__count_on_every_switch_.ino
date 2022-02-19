int ledmsb = 13;
int ledmid = 12;
int ledlsb = 11;
int switchpin = 10;
boolean lastbutton = LOW;
int count = 0;
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
    lastbutton = !lastbutton;
    if (count%2 != 0)
    {
      digitalWrite(ledlsb,HIGH);
    }
    else 
    {
      digitalWrite(ledlsb,LOW);
    }
    if (count>=4)
    {
      digitalWrite(ledmsb,HIGH);
    }
    else 
    {
      digitalWrite(ledmsb,LOW);
    }
    if (count==2 || count == 3 || count == 6 || count == 7)
    {
      digitalWrite(ledmid,HIGH);
    }
    else 
    {
      digitalWrite(ledmid,LOW);
    }
    count++;
    delay(200);
  }
  else 
  {
    lastbutton = LOW;
  }
  if (count == 8)
  {
    count=0;
  }
}
