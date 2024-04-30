#include <Servo.h>
Servo myservo; //create servo object to control servo:
//twelve servo objects can be created on most boards:
int pos = 0
void setup() {
  // put your setup code here, to run once:
myservo.attach(9); //attaches the servo on pin 9 to the servo object:

}

void loop() {
  // put your main code here, to run repeatedly:
for(pos = 30; pos<= 150; pos + = 1) { //goes from 30 degrees to 150 degrees
  // in steps of 1 degree:
  myservo.write(pos);
  delay(15);
}
for(pos = 150;pos > = 30; pos -= 1) {//goes from 150 degrees to 30 degrees
  myservo.write(pos);
  delay(15);

  }
}
