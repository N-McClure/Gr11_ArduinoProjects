#include <Keypad.h>

int redPin = 13;
int greenPin = 12;
int bluePin = 11;
const int ROW_NUM = 4;
const int COLUMN_NUM = 4;
int trys = 0;
int buzzer = 10;

char keys[ROW_NUM] [COLUMN_NUM] = {
  {'1','2','3','A'}, //Row 1:
  {'4','5','6','B'}, //Row 2:
  {'7','8','9','C'}, //Row 3:
  {'*','0','#','D'}  //Row 4:
};

byte pin_rows[ROW_NUM] = {9,8,7,6};
byte pin_column[COLUMN_NUM] = {5,4,3,2};

Keypad keypad = Keypad(makeKeymap(keys),pin_rows,pin_column,ROW_NUM,COLUMN_NUM);

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin,OUTPUT);  //red pin is an Output:
  pinMode(greenPin,OUTPUT);  //green pin is an Output:
  pinMode(bluePin,OUTPUT);  //blue pin is an Output:
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  char key = keypad.getKey();
  if (key){
    if(key == '1'){
      delay(1000);
      char key2 = keypad.getKey();
      if (key2 == '9'){
        delay(1000);
        char key3 = keypad.getKey();
        if (key3 == '3'){
          delay(1000);
          char key4 = keypad.getKey();
          if (key4 == '8'){
            correctcolor();
          }
        }
      }
    } else {
      wrongCode();
    }
  }
  
}
void setColor(int red, int green, int blue) // This is the function that we build.
{
  #ifdef COMMON_ANODE
  red = 255 - red;
  green = 255 - green;
  blue = 255 - blue;
  #endif
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}

void correctcolor(){
      digitalWrite(buzzer, HIGH);
      setColor(0, 255, 0); // green
      delay(1000);
      digitalWrite(buzzer, LOW);
      setColor(255, 0, 0); // green
      delay(1000);
      setColor(0, 0, 255); // blue
      delay(1000);
      setColor(255, 255, 0); // yellow
      delay(1000);
      setColor(80, 0, 80); // purple
      delay(1000);
      setColor(0, 255, 255); // aqua
      delay(1000); 
      setColor(0, 0, 0);
}

void wrongCode(){
  if(trys<3){
    setColor(255, 0, 0);
    trys = trys + 1;
    Serial.println(trys);
    delay(500);
    setColor(0,0,0);
  } else {
    setColor(255, 0, 0);
    digitalWrite(buzzer, HIGH);
    delay(10000);
    setColor(0, 0, 0);
    digitalWrite(buzzer, LOW);
  }
}
