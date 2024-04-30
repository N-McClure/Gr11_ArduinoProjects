//set pin numbers:
const int buttonPin = 2;   //the nimber of the pushButton pin:
const int ledPin = 13;     //the number of the LED pin:

//variables will change:
int buttonState = 0;
void setup() {
  // put your setup code here, to run once:
//initialize the LED pin as Output:
pinMode(ledPin,OUTPUT);
//Initialize the pushButton as Input:
pinMode(buttonPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//read the state of pushButton value:
buttonState = digitalRead(buttonPin);
//check if the button is pressed:
//if it is, buttonState is HIGH:
if(buttonState == HIGH){
  //turn LED on:
  digitalWrite(ledPin,HIGH);
}else{
  //turn LED off:
  digitalWrite(ledPin,LOW);
}
}
