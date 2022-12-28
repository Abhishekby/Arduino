void setup()
{  Serial.begin(9600);
  pinMode(2, INPUT);
 pinMode(13,OUTPUT);
}

void loop()
{
  int prsd=digitalRead(2);
  digitalWrite(13,prsd);
  Serial.println(prsd);
  delay(1000);
}
