#include <DHT.h>
#include <DHT_U.h>

dht11 DHT11;
#define DHT11PIN 8
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
DHT11.read(DHT11PIN);
Serial.print("TMEP=");
Serial.print(DHT11.temperature);
Serial.print(" C");
Serial.print('\t');
Serial.print("HUM=");
Serial.print(DHT11.humidity);
Serial.println(" %");
delay(500);

}
