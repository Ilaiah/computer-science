int Pot=A0;
int output=13;
void setup() 
{pinMode(output,OUTPUT);

  // put your setup code here, to run once:

}

void loop() 
{int reading=analogRead(pot);
int bright=reading/4;
delay(500);
analogWrite(output,bright);

  // put your main code here, to run repeatedly:

}
