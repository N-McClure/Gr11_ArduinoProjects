int sensorPin = A0;
int ledPin = 13;
int sensorValue = 0;//Variable to store the value from sensor:
void setup() {
  // put your setup code here, to run once:
//Declare ledPin as output:
pinMode(ledPin,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
//read the value from the sensor:
sensorValue = analogRead(sensorPin);
//turn ledPin on:
digitalWrite(ledPin,HIGH);
//stop program for <sensorValue> mSeconds:
delay(sensorValue);
//ledPin off:
digitalWrite(ledPin,LOW);
//stop the program for <sensorValue> mSeconds:
delay(sensorValue);
}
