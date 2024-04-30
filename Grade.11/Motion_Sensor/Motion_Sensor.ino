boolean lockLow = true;
boolean takeLowTime;
int pirPin = 3;
int ledPin = 13;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pirPin, INPUT);
pinMode(ledPin,OUTPUT);
digitalWrite(pirPin,LOW);
Serial.print("calibrating sensor");
{Serial.print("."); 
delay(1000);}
Serial.println("done");
Serial.println("Sensor ACTIVE");
delay(50);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(pirPin) == HIGH){ digitalWrite(ledPin,HIGH);
if(lockLow){lockLow = false;
Serial.println("---");
Serial.print("motion detected at ");
Serial.print(millis()/1000);
Serial.println("sec");
delay(50);
takeLowTime = true;}
if(digitalRead(pirPin) == LOW){digitalWrite(ledPin,LOW);
if(takeLowTime){lowIn = millis();
takeLowTime = false;}
if(!lockLow && millis() - lowIn > pause){
  lockLow = true;
  Serial.print("motion ended at ");
  output Serial.print((millis() - pause)/1000);
  Serial.println(" sec");
  delay(50);}}
  }
}
