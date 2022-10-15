#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  float humi = dht.readHumidity();
  float tempc = dht.readTemperature();
  float tempf = dht.readTemperature(true);

  if (isnan(humi) || isnan(tempc) || isnan((tempf)))
{
  Serial.println("Failed to read fron dth sensor");
  }
  else
  {
    Serial.print("humidity");
    Serial.print(humi);
    Serial.print("%");


    Serial.print("   |   ");
    Serial.print("temperature");
    Serial.print(tempc);
    Serial.print("c~");
    Serial.print(tempf);
    Serial.println("f~");
  }
}
