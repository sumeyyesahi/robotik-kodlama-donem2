/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogReadSerial
*/
void setup() {
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
}



void loop() {

  int sensorValue = analogRead(A0);
  if(sensorValue>=0&&sensorValue<=300){
    digitalWrite(3,1);
    digitalWrite(4,0);
    digitalWrite(5,0);
  }
  else if(sensorValue>=301&&sensorValue<=700){
    digitalWrite(3,0);
    digitalWrite(4,1);
    digitalWrite(5,1);
    
  }
  else{
    digitalWrite(3,1);
    digitalWrite(4,1);
    digitalWrite(5,1);
  }
  Serial.println(sensorValue);
  delay(1);       
}
