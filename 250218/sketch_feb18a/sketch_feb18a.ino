void setup() {
 
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);

}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  if(sensorValue<=50){
    digitalWrite(2,1);
    digitalWrite(3,0);
    digitalWrite(4,0);
    
  }
  else if(sensorValue<=100){
    digitalWrite(2,1);
    digitalWrite(3,0);
     digitalWrite(4,1);
  }
  else if(sensorValue<=200){
     digitalWrite(2,1);
     digitalWrite(3,1);
     digitalWrite(4,1);
  }
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1);        // delay in between reads for stability
}
