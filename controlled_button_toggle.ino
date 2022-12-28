//This code prevent dangling or bouncing state of the button.
bool led_state=false;
unsigned long tc=0;

void setup()
{  Serial.begin(9600);
  pinMode(2, INPUT);
 pinMode(13,OUTPUT);
 digitalWrite(13,led_state);
}

void loop()
{ 
  int prsd=digitalRead(2);
  if(prsd==true)
  {
    if(millis()-tc>50)
    {
      led_state=!led_state;
      digitalWrite(13,led_state);
    }
    tc=millis();
  }
  Serial.println(prsd);
  
}
