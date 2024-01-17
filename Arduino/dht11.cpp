#include <DHT11.h>
DHT11 dht11(13);

void setup() {
 Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int temperature = dht11.readTemperature();
  if (temperature != DHT11::ERROR_CHECKSUM && temperature != DHT11::ERROR_TIMEOUT)
    {
        Serial.print("Temperature: ");
        Serial.print(temperature);
        Serial.println(" °C");
    }
    else
    {
        Serial.println(DHT11::getErrorString(temperature));
    }

    // Wait for 1 seconds before the next reading.
    delay(1000);
}
