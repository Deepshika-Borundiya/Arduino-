int ledpin = 11; // PWM 

int ledlevel = 0; // controls the brightness and can take any value between 0 and 255 (2^8 -1)
int dim = 5;
void setup() {
  pinMode (ledpin , OUTPUT);

}


void loop() 
 {
  analogWrite (ledpin,ledlevel);
  if ( ledlevel >= 0 && ledlevel <= 255)
    {
      ledlevel = ledlevel + dim;
    delay (50);
    }
  if (ledlevel <= 0 || ledlevel >= 255)
  {
    dim = -dim;
  }
 }
