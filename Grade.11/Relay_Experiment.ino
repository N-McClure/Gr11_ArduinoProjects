const int buttonPin = 2;
const int relay = 8;

int relayState = HIGH;
int buttonState;
int lastButtonState = LOW;

long lastDebounceTime = 0; //Last Output pin trigger time:
long debounceDelay = 50; //Elimination of jitter, if output is not stable increase in time:

void setup() {
  // put your setup code here, to run once:
pinMode(buttonPin,INPUT);
pinMode(relay,OUTPUT);
digitalWrite(relay,relayState);
}

void loop() {
  // put your main code here, to run repeatedly:
int reading = digitalRead(buttonPin); //Read button data:

if(reading ! = lastButtonState){
  lastDebounceTime = millis();
}
if((millis() - lastDebounceTime)>debounceDelay){
  if(reading ! = buttonState){
    buttonState = reading;

    if(buttonState == HIGH){
      relayState == !relayState;
    }
  }
}
digitalWrite(relay,relayState);
lastButtonState = reading;
}
