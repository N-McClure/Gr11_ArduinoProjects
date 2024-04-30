//RF.id: By.Nick McClure

#include <SPI.h> //SPI library
#include <MFRC522.h> //RFID library

const int pinRST = 9;
const int pinSDA = 10;

MFRC522 mfrc522(pinRST); //Set up mfrc522 on Arduino

void setup() {
  SPI.begin(); //Open SPI connection
  mfrc522.PCD_Init(); //Initialize Proximity Coupling Device (PCD)
  Serial.begin(9600); //open serial connection
}

void loop() {
  if (mfrc522.PICC_IsNewCardPresent()){ //TRUE. if RFID tag/card is present //PICC = Proximity Integrated Circuit Card
    if (mfrc522.PICC_ReadCardSerial()){ //TRUE. if RFID tag/card eas read
      Serial.print("RFID RAG ID: ");
      for (byte i = 0; i < mfrc522.uid.size; ++i){ //read id (in parts)
        Serial.print(mfrc522.uid.uidByte[i], HEX); //print id as hex values
        Serial.print(" "); //add space between hex blocks to read easily
      }
      Serial.println(); //print out of id is complete
    }
  }

}
