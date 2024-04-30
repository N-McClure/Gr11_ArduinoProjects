int motor = 8;  //motor turn-on trigger signal - active high:
void setup() {
  // put your setup code here, to run once:
pinMode(motor,OUTPUT); //define port attribute for output:
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(motor,HIGH); //motor On:
delay(1000); //ON for 1 second:
digitalWrite(motor,LOW); //motor Off:
delay(1000); //OFF for 1 second:
}
