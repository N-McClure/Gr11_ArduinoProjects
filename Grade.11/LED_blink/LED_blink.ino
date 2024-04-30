//Pin 13 has an LED connected to it:
//Name it:
int led = 13;
void setup() {
  // put your setup code here, to run once:
  // Initialize the Pin as an Output:
  pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
//Turn light On:
digitalWrite(led,HIGH);
delay(5000);
digitalWrite(led,LOW);
delay(5000);


}
