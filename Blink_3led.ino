int led2=3,led3=2,led1=4,led4=7;;
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5,OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(100);
  digitalWrite(2, LOW);
  delay(100); 
  digitalWrite(3, HIGH);
  delay(100);
  digitalWrite(3, LOW);
  delay(100); 
  digitalWrite(4, HIGH);
  delay(100);
  digitalWrite(4, LOW);
  delay(100); 
}
