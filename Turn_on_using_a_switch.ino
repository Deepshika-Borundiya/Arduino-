int ledpin = 13;
int switchpin = 8;
void setup() {
  pinMode (ledpin, OUTPUT);
  pinMode (switchpin, INPUT);

}

void loop() {
  if (digitalRead (switchpin) == HIGH)
    { digitalWrite (ledpin, HIGH);
    }
  else 
    {digitalWrite (ledpin, LOW);
    }
}
