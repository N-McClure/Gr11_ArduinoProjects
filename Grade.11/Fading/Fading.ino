int ledPin = 13;
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  //fade in from min to max in increments of 5 points:
  for(int fadeValue = 0; fadeValue <= 255; fadeValue += 5){
    //sets the value(range from 0 to 255):
    analogWrite(ledPin,fadeValue);
    //wait 30 mSeconds to see dimming effect:
    delay(30);
  }

  //fade out from max to mi in increments of 5 points:
  for(int fadeValue = 255; fadeValue >=0; fadeValue -= 5){
    //sets the value(range from 0 to 255):
    analogWrite(ledPin,fadeValue);
    //wait 30 mSeconds to see dimming effect:
    delay(300);
  }

}
