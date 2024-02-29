#include <Arduino.h>

#define LED_FLASH 23

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_FLASH, OUTPUT);
  Serial.begin(115200);
  delay(500);
  Serial.println("HOLA MUNDO");
}

void loop() {
  // put your main code here, to run repeatedly:
 // Serial.println("ledhigh");
  digitalWrite(LED_FLASH, HIGH);
  delayMicroseconds(0.1);
  // Serial.println("ledlow");
  digitalWrite(LED_FLASH,LOW);
  delayMicroseconds(0.1);
}

/* LED 1
// put your main code here, to run repeatedly:
  Serial.println("ledhigh");
  digitalWrite(LED_FLASH, HIGH);
  delay(500);
  Serial.println("ledlow");
  digitalWrite(LED_FLASH,LOW);
  delay(500);
*/