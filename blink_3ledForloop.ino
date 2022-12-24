int led2=3,led3=2,led1=4;
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{ for(int p=2;p<5;p++)
{
  digitalWrite(p, HIGH);
  delay(1000);
  digitalWrite(p, LOW);
}

}
