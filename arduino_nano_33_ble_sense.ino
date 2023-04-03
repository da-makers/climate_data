// DA Makers LAB
// https://github.com/da-makers/climate_data
// Written by Luca Barbieri, Vittorio Summa, Natalie Morandi

// (0.2126* red + 0.7152* green + 0.0722*blue)
// https://en.wikipedia.org/wiki/Relative_luminance

// https://github.com/arduino-libraries/Arduino_APDS9960/blob/master/docs/api.md#coloravailable

// https://docs.arduino.cc/tutorials/nano-33-ble-sense/humidity-and-temperature-sensor 


#include <Arduino_HTS221.h>
#include <Arduino_APDS9960.h>

float old_temp = 0;
float old_hum = 0;

int r = 0, g = 0, b = 0;

void setup() {
  Serial.begin(9600);
  while (!Serial);

  if (!HTS.begin()) {
  Serial.println("Failed to initialize humidity temperature sensor!");
  while (1);
  }

  if (!APDS.begin()) {
    Serial.println("Error initializing APDS-9960 sensor.");
    while (true); 
  }
}

void loop() {
  // read all the sensor values
  float temperature = HTS.readTemperature();
  float humidity    = HTS.readHumidity();

  if (APDS.colorAvailable()) {
    APDS.readColor(r, g, b);
  }

    old_temp = temperature;
    old_hum = humidity;

  // print each of the sensor values
  Serial.print("Temperature = ");
  Serial.print(temperature-4);
  Serial.println(" °C");

  Serial.print("Humidity    = ");
  Serial.print(humidity-8);
  Serial.println(" %");

  Serial.print("Brightness = ");
  Serial.println((0.2126*r + 0.7152*g + 0.0722*b));

  // print an empty line
  Serial.println();

  // wait 1 second to print again
 delay(1000);

}
