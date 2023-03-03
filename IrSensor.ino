void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(3,INPUT);
  Serial.begin(9600);

}

void loop() {
  
  if(digitalRead(3)==LOW){
  digitalWrite(13, HIGH);
  }
  else{
  digitalWrite(13, LOW);
  }
 
  
  
}
