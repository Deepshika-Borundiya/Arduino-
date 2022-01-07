int ledpin = 13; // pin no 13 is is the on board led pin
void setup() {
  // put your setup code here, to run once:
pinMode (ledpin, OUTPUT); //We set pin 13 as the output pin
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (ledpin,HIGH); //we turn the led on
delay (500); //led remains on for 0.5s
digitalWrite (ledpin,LOW); //we turn the led off
delay (250); // led is off for 1s
}
