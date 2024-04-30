int redled = 3;
int yellowled = 5;
int greenled = 7;
void setup() {
  // put your setup code here, to run once:
pinMode(redled,OUTPUT);
pinMode(yellowled,OUTPUT);
pinMode(greenled,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(greenled,HIGH); //Green light on:
delay(2000);
digitalWrite(greenled,LOW); //Green light off:
for(int i = 0;i<3;i++)
{
  delay(500);//Wait for half a sec
  digitalWrite(yellowled,HIGH);//Yellow light on:
  delay(2000);
  digitalWrite(yellowled,LOW);//Yellow light off:
}
delay(500);
digitalWrite(redled,HIGH);//Red light on:
delay(2000);
digitalWrite(redled,LOW);//Red light off:
  
}
