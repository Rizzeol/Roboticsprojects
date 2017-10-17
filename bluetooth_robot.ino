                                                                                                                                                         


void setup()
{
  Serial.begin(9600);

 
 pinMode(2,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT); 
 pinMode(9,OUTPUT);

  Serial.println("<Robot name> Welcomes you"); 
  delay(1000);
} 
  

void loop()
{
  if(Serial.available()>0)//Checking is Serial data available
  {
    int input = Serial.read(); //Storing value of read data into variable assigned
    switch(input)
    {
     case 'w' : MoveF(); //Calling respective functions if mathced with case label 
     break;
     case 's' : MoveB(); // here is it important to use '' as that stores the ASCII value is the letter in the variable
     break;
     case 'a' : MoveL(); // and hence we can use the int keyword
     break;
     case 'd' : MoveR();
     break;
    
     case 'x' : Stop();
     break;
     default : break;
    }
  } 
  delay(50);
}

void MoveF()
{
  Serial.println("<Robot Name> Forward");
  digitalWrite(2,HIGH); 
  digitalWrite(3,LOW); 
  digitalWrite(4,HIGH); 
  digitalWrite(5,LOW); 
 
   // As a result the robot will move forward
}

void MoveB()
{
  Serial.println("<Robot Name> Backward");
   digitalWrite(2,LOW); 
  digitalWrite(3,HIGH); 
  digitalWrite(4,LOW); 
  digitalWrite(5,HIGH); 
 
}

void MoveL()
{
  Serial.println("<Robot Name> Left");
  digitalWrite(2,LOW); 
  digitalWrite(3,HIGH); 
  digitalWrite(4,HIGH); 
  digitalWrite(5,LOW); 

}

void MoveR()
{
  Serial.println("<Robot Name> Right");
   Serial.println("<Robot Name> Forward");
  digitalWrite(2,HIGH); 
  digitalWrite(3,LOW); 
  digitalWrite(4,LOW); 
  digitalWrite(5,HIGH); 

}


void Stop()
{
  Serial.println("<Robot Name> Stop");
   digitalWrite(2,LOW); 
  digitalWrite(3,LOW); 
  digitalWrite(4,LOW); 
  digitalWrite(5,LOW); 
   
}


