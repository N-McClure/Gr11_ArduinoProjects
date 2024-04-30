#include <Servo.h>
Servo myservo; //create servo object to control servo:
//twelve servo objects can be created on most boards:
int pos = 0;
void setup() {
  // put your setup code here, to run once:
myservo.attach(9); //attaches the servo on pin 9 to servo object:

}

void loop() {
  // put your main code here, to run repeatedly:

myservo.write(10);
delay(500);

myservo.write(90);
delay(500);

myservo.write(150);
delay(500);

myservo.write(90);
delay(500);

myservo.write(10);
delay(500);
}
