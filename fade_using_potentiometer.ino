int ledpin = 11;
int pot = 0;
int variable;
int ledlevel = 0;

void setup ()
{
  analogReference (DEFAULT);  // to set the reference voltage to 5v 
  pinMode (ledpin , OUTPUT);
}

void loop ()
{
  variable = analogRead (pot);  // reads the varying values when the nob of potentiometer is turned
  ledlevel = map ( variable, 0, 1023, 0, 255); //ADC is 10 bit ( 1024 values) and pwm is 8 bit (256 values) 
  analogWrite (ledpin,ledlevel);
}
