int buzzer = 5;  //Buzzer = pin 5:
void setup() {
  pinMode(buzzer,OUTPUT);  //Buzzer is an output:

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(buzzer,HIGH);  //Buzzer produces a sound:
}
