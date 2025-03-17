// DHT11
#include "DHT.h"
#define DHTTYPE DHT11
uint8_t DHTPin = D7;
DHT dht(DHTPin, DHTTYPE);

float Temperature, Humidity, HeatIndex;

void setup() {
  // put your setup code here, to run once:
  
}

void loop() {
  // put your main code here, to run repeatedly:
  ReadDHT11();
  delay(6000);
}

void ReadDHT11() {
  float temperature = round(dht.readTemperature()*10)/10;
  float humidity = round(dht.readHumidity()*10)/10;
  float heatIndex = round(dht.computeHeatIndex(Temperature, Humidity, false)*10)/10;

  if(isnan(temperature) || isnan(humidity) || isnan(heatIndex)) {
    Serial.println("DHT11 sensor error");
  }

  else {
    Temperature = temperature;
    Humidity = humidity;
    HeatIndex = heatIndex;

    Serial.println("Temp: " + String(Temperature) + " .C");
    Serial.println("Humidity: " + String(Humidity));
    Serial.println("% HeatIndex: " + String(HeatIndex) + "\n");
  }
}
