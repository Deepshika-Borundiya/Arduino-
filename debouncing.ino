int switchpin =  8;
int ledpin = 13;
boolean laststate = LOW; //previous state of the button
boolean ledon = false; //to set led on or off
boolean currentstate = LOW; // current state of the button


void setup() {

  pinMode (switchpin, INPUT) ;
  pinMode (ledpin, OUTPUT) ;

}

boolean debounce (boolean last) //returns a boolean value and the input to this function is boolean variable
{
  boolean current = digitalRead (switchpin);
  if ( last != current) //switch has just changed it's state and we have to debounce
  {
    delay (3); // delay by 3ms is enough for the switch to finish debouncing without the user withdrawing his hand
    current = digitalRead (switchpin); // to read the steady value after the debounce
  }
  return current;
}

void loop() {
  currentstate = debounce (laststate);
  if (laststate == LOW && currentstate == HIGH) // switch was off previously and is switched on currently
  {
    ledon = !ledon;
  }
  laststate = currentstate; // updating the value
  digitalWrite (ledpin,ledon); //the state of ledon is passed to ledpin

}
