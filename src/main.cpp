#include <Arduino.h>
#include<SPI.h>

char buff[]="Hello Slave\n";

void setup() {
  Serial.begin(115200); /* begin serial with 9600 baud */
  SPI.begin();  /* begin SPI */
  Serial.println("Starting ESP8266 SPI Controller program.");
}

void loop() {
  Serial.println("Sending data...");
  for(unsigned int i=0; i<(sizeof buff); i++) {  /* transfer buff data per second */
    SPI.transfer(buff[i]);
  }
  delay(1000);
}