int Redled = 8;    //set Red led as output:
int Yellowled = 7; //set Yellow led as output:
int Greenled = 6;  //set Green led as output:
int Key1 = 5; //Initialize pin for Red button:
int Key2 = 4; //Initialize pin for Yellow button:
int Key3 = 3; //Initialize pin for Green button:
int KeyRest = 2;
int Red;
int Yellow;
int Green;
void setup() {
  // put your setup code here, to run once:
  pinMode(Redled,OUTPUT);
  pinMode(Yellowled,OUTPUT);
  pinMode(Greenled,OUTPUT);
  pinMode(Key1,INPUT);
  pinMode(Key2,INPUT);
  pinMode(Key3,INPUT);
  pinMode(KeyRest,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
Red = digitalRead(Key1);
Yellow = digitalRead(Key2);
Green = digitalRead(Key3);
if(Red == HIGH)Red_YES();
if(Yellow == HIGH)Yellow_YES();
if(Green == HIGH)Green_YES();
}
void Red_YES() //execute the code until Red light is on. end cycle when reset is pressed:
{
  while(digitalRead(KeyRest)==0) 
{
  digitalWrite(Redled,HIGH);
  digitalWrite(Greenled,LOW);
  digitalWrite(Yellowled,LOW);  
}
clear_led();
}
void Yellow_YES() //execute the code until yellow led is on. end cycle when reset is pressed:
{
  while(digitalRead(KeyRest)==0)
  {
    digitalWrite(Redled,LOW);
    digitalWrite(Greenled,LOW);
    digitalWrite(Yellowled,HIGH);
  }
  clear_led();
}
void Green_YES() //execute the code until Green led is on. end cycle when reset is pressed:
{
 while(digitalRead(KeyRest)==0)
  {
    digitalWrite(Redled,LOW);
    digitalWrite(Greenled,HIGH);
    digitalWrite(Yellowled,LOW);
  }
  clear_led();
}
void clear_led() //All led off:
{
  digitalWrite(Redled,LOW);
  digitalWrite(Greenled,LOW);
  digitalWrite(Yellowled,LOW);
}
