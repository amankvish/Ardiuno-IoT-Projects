#define BLYNK_PRINT Serial 
#include <BlynkSimpleSerialBLE.h>
#include <SoftwareSerial.h>
SoftwareSerial SwSerial(10,11);   //RX,TX
char auth[]="XRyA_w8jIW93ISyYyRtnW-zTx07NW0MC";
SoftwareSerial SerialBLE(10,11);   //RX,TX

 void setup()
 { 
  Serial.begin(9600);
  SerialBLE.begin(9600);
  Blynk.begin(SerialBLE,auth);
  Serial.println("waiting for connections....");
 }

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();

}
