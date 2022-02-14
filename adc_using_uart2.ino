int ledPin = 11;
char pot_charc;
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
    pot_charc = Serial.read();
    pot_val = int(pot_charc);
    led_val = map (pot_val, 0, 1023, 0, 255);
    analogWrite (ledPin, led_val);
    Serial.println (led_val);
  }
  else
  {
    digitalWrite(ledPin,LOW);
  }
}