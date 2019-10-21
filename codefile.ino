int buttonState1=0;
int buttonState2=0;
void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  
}

void loop()
{
  buttonState1 = digitalRead(2);
  buttonState2 = digitalRead(3);
  if(buttonState1 == HIGH && buttonState2 == HIGH )
  {  
  digitalWrite(13, HIGH);
  }
else
{ digitalWrite(13, LOW);
}
  delay(10);
  if(buttonState2 == HIGH || buttonState1 == HIGH )
  {  
  digitalWrite(12, HIGH);
  }
else
{ digitalWrite(12, LOW);
}
  delay(10);
}
