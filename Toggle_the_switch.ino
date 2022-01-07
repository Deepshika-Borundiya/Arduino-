int ledpin = 13;
int switchpin = 8;
boolean lastbutton = LOW;
boolean ledon = false;
void setup() {
  pinMode (ledpin, OUTPUT);
  pinMode (switchpin, INPUT);


}

void loop() {
  if (digitalRead (switchpin) == HIGH && lastbutton == LOW)
  {
    digitalWrite (ledpin,HIGH);
    ledon = !ledon;
    lastbutton = HIGH;
  }
  else
  {
    lastbutton = digitalRead(switchpin);
  }
  digitalWrite(ledpin,ledon);
}
