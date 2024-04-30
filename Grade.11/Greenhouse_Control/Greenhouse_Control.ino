#include <dht11.h>
dht11 DHT11;
#define DHT11PIN 8
#include <Servo.h>
Servo myservo;
int pos = 0;
int greenLed = 3;
int yellowLed = 5;
int redLed = 7;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myservo.attach(9);
pinMode(greenLed,OUTPUT);
pinMode(yellowLed,OUTPUT);
pinMode(redLed,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
DHT11.read(DHT11PIN);
Serial.print("TEMP=");
Serial.print(DHT11.temperature);
Serial.print(" C");
Serial.print('\t');
Serial.print("HUM=");
Serial.print(DHT11.humidity);
Serial.println(" %");
delay(500);
}{
if (TEMP= < 24)myservo.write(10);
if (TEMP= > 24 or < 27)myservo.write(50);
if (TEMP= > 28)myservo.write(170);
}{
if(HUM= < 50%)digitalWrite(greenLed,HIGH);
if(HUM= > 50% or < 75%)digitalWrite(yellowLed,HIGH);
if(HUM= > 75%)digitalWrite(redLed,HIGH);
}
