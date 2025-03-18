void setup() {
 pinMode(2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  tone(2,500,100);
  delay(200);
 

  tone(2,9000,200);
  delay(300);
  
  tone(2,2000,100);
  delay(200);
  noTone(2);
  
}
