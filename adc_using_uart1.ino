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
  pot_charc = char(pot_val);
  Serial.write(pot_charc);
}