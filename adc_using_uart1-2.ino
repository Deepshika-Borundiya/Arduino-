int pot = 0;
int pot_val;
char pot_charc;
void setup()
{
  Serial.begin(9600);
  pinMode(pot, INPUT);
}

void loop()
{
  pot_val = analogRead(pot);
  if (pot_val >= 0 && pot_val < 128)
  {
    Serial.write('0');
  }
   if (pot_val >= 128 && pot_val < 256)
  {
    Serial.write('1');
  }
   if (pot_val >= 256 && pot_val < 384)
  {
    Serial.write('2');
  }
   if (pot_val >= 384 && pot_val < 512)
  {
    Serial.write('3');
  } if (pot_val >= 512 && pot_val < 640)
  {
    Serial.write('4');
  }
   if (pot_val >= 640 && pot_val < 768)
  {
    Serial.write('5');
  } if (pot_val >= 768 && pot_val < 896)
  {
    Serial.write('6');
  } if (pot_val >= 896 && pot_val < 1024)
  {
    Serial.write('7');
  }
}