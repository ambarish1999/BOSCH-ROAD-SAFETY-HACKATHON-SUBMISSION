int flag=0;
void setup() 
{
  //pinMode(13,OUTPUT);
  //digitalWrite(13,LOW);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT) ; 
  Serial.begin(9600);
}

void loop() 
{
  if(Serial.available() > 0)
  {
    if(Serial.read() == '1')
    { flag=1;}
    if(Serial.read()=='2')
    {flag=2;}}
    if(flag==1){
      digitalWrite(7,HIGH);
  delay(500);           
  //digitalWrite(7, LOW); 
  //delay(500);
  digitalWrite(8, HIGH); 
  delay(500);            
  //digitalWrite(8, LOW); 
  //delay(500);
    }
    if(flag==2){
        setup();
    }
    

    else
    {
      digitalWrite(13,LOW);
    }
}
