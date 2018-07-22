int ledPin = 10;
int brightness =0;
int fadeAmount = 5;
void setup() 
{  
  pinMode(ledpin,OUTPUT);
  //Note that PWM doesn't need a pinMode
}
void loop()
{
  analogWrite(ledPin,brightness);

  brightness= brightness + fadeAmount;
  if ( brightness<= 0 || brightness>= 255)

  {fadeAmount= -fadeAmount;
  }
  
  delay(30);
  
} }
  
 } 
