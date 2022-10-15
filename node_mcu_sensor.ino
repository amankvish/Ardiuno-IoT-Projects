
#include <DHT.h>
#include <ESP8266WiFi.h>
#include <ThingSpeak.h>
#define DHTPIN D4
DHT dht (DTHPIN, DHT11);
WifiClient client;
const char *ssid = "";
const char *pass = "";
long myChannelNumber = 1524303;
const char myWriteAPIKey[]= "";


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(10);
  Serial.println("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid,pass);
  while(WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("wifi connected");
  dht.begin();
  ThingSpeak.begin(client);
}
void loop()
{
  float h= dht.readHumidity();
  float t= dht.readTemperature();
  {
    Serial.println("Failed to read from DHT sensor ");
    return;
  }
  ThingSpeak.setField(1,t);
  ThingSpeak.setField(2,t);
  ThingSpeak.writeFields(myChannelNumber, myWrite API KEY);
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print("degree Celcius,Humidity:");
  Serial.print(h);
  Serial.println("Sending to ThingSpeak. ");
  Serial.println("Waiting...");
  delay(150000);
  
}
