int lm35= A5;

void setup()
{
Serial.begin(9600);
  
}

void loop()
{
  int analogValue;
  float temperature;
  analogValue = analogRead(lm35);
  temperature = float(analogValue)/1023;
  temperature = temperature*500;

  Serial.print("Temp:");
  Serial.print(temperature);
  Serial.print("C");
  delay(1000);
}

