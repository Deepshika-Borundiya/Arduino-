#include <Wire.h>
int switchPin = 9;
void setup()
{
  Wire.begin(); // Start I2C Bus as MASTER
  Serial.begin(9600);
  pinMode (switchPin, INPUT);
}

void loop()
{
  if (digitalRead(switchPin) == HIGH)
  { Wire.beginTransmission(9); //transmit to slave device whose address is 9
    Wire.write(0);//master sets SDA line low to signal the slave
    Wire.endTransmission();
  }
  else
  { Wire.beginTransmission(9); 
    Wire.write(1);//master sets SDA line high
    Wire.endTransmission();
  }
  
  delay(20);
}