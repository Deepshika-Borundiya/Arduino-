const unsigned long interval= 500;
unsigned long previous_time = 0;
unsigned long current_time;
int ledpin = 13;
boolean ledstate = LOW;

void setup() {
  pinMode (ledpin, OUTPUT);

}

void loop() {
  current_time = millis();
  if(current_time - previous_time >= interval)
  {
    if (ledstate == LOW)
    {
    digitalWrite (ledpin, HIGH);
    ledstate = !ledstate;  
    }
    else
    {
      digitalWrite (ledpin, LOW);
      ledstate = !ledstate;
    }
    previous_time = current_time;
  }

}
