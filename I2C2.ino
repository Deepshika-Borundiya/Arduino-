#include <Wire.h>
int x = 0;
int ledPin = 10;
void setup(){
  pinMode (ledPin, OUTPUT);
  Wire.begin(9); //we start the I2C communication for the slave with address 9
  Wire.onReceive(receiveEvent);
}
void receiveEvent(int bytes) {
  x = Wire.read();    // read one character from the I2C
}
void loop(){
  if (x==0)
  {
    digitalWrite (ledPin, HIGH);//If slave senses a low signal on SDA line it turns on the LED
  }
  if (x==1)
  {
    digitalWrite(ledPin, LOW);
  }
}