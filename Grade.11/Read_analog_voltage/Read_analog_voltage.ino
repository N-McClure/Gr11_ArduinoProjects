//the set up routine runs once you press reset:
void setup() {
 //Initialize serial communication at 9600 bits per sec:
 serial.begin(9600);
}
 //The loop routine runs over and over forever:
void loop() {
  //read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  //Convert the analog reading(which goes from 0 - 1023) to voltage(0 - 5V):
  float voltage = sensorValue * (5.0/1023.0);
  //print out the value you read:
  Serial.println(voltage);

}
