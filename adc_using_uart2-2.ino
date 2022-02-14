int ledPin = 11;
char pot_char;
int pot_val;
int led_val;

void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available())
  {
    pot_char = Serial.read();
    if ( pot_char == '0')
    {
      analogWrite(ledPin, 32);
    }
    if ( pot_char == '1')
    {
      analogWrite(ledPin, 64);
    }
    if ( pot_char == '2')
    {
      analogWrite(ledPin, 96);
    }
    if ( pot_char == '3')
    {
      analogWrite(ledPin, 128);
    }
    if ( pot_char == '4')
    {
      analogWrite(ledPin, 160);
    }
    if ( pot_char == '5')
    {
      analogWrite(ledPin, 192);
    }
    if ( pot_char == '6')
    {
      analogWrite(ledPin, 224);
    }
    if ( pot_char == '7')
    {
      analogWrite(ledPin, 255);
    }
  }
  else
  {
    digitalWrite(ledPin,LOW);
  }
}