#include "DHT.h"

#define DHTPIN 2        // The pin where the DHT22 is connected
#define DHTTYPE DHT22   // DHT22 (AM2302) sensor

DHT dht(DHTPIN, DHTTYPE);  // Initialize DHT sensor

void setup() {
  Serial.begin(9600); 
  dht.begin();          // Start sensor
}

void loop() {
  delay(2000);  // Wait 2 seconds between readings

  float humidity = dht.readHumidity();         // Read humidity
  float temperature = dht.readTemperature();   // Read temperature in Celsius

  // Check if any reading failed
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT22 sensor!");
    return;
  }

  // Print values to Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C  |  Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");
}
