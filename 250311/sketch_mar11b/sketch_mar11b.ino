int r=3;
int g=5;
int b=6;

void setup() {
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(b,OUTPUT);
  
}

void loop() {  
  digitalWrite(g,1);
  digitalWrite(b,1);
  for(int i=0;i<=255;i++)
  {
    analogWrite(r,i);
    delay(10);
  
  }  
  for(int i=255;i>0;i--)
  {
    analogWrite(r,i);
    delay(10);
  
  }  

  for(int i=0;i<=255;i++)
  {
    analogWrite(g,i);
    delay(10);
  
  }  
  for(int i=255;i>0;i--)
  {
    analogWrite(g,i);
    delay(10);
  
  }
  for(int i=0;i<=255;i++)
  {
    analogWrite(b,i);
    delay(10);
  
  }  
  for(int i=255;i>0;i--)
  {
    analogWrite(b,i);
    delay(10);
  
  }  

 

}
