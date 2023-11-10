#include <DHT.h>

// Declare where the air humidity and ambient temperature sensor where connected on the grove shield and the type he are.
#define DHTPIN 2
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

// Declare where the sensor where connected on the grove shield
int moistureSensorPin = A0;

// Initialize variable for sensor
int moistureValue = 0;
float airHumidityValue = 0;
float temperatureValue = 0;
String moistureState = "Dry";

void setup() {
  // Serial setup to 9600 baud.
  Serial.begin(9600);

  // We begin the DHT for air humidity and ambient temperature sensor.
  dht.begin();

  // Message to be sure the Arduino board get the code and successfully started.
  Serial.println("--");
  Serial.println("EnviroLab successfully started.");
  Serial.println("--");
}

void loop() {

  // Wait 2sec between each sensor call.
  delay(2000);

  // We get the soil humidity, air humidity and ambient temperature from the sensors.
  //moistureValue = analogRead(moistureSensorPin);
  airHumidityValue = dht.readHumidity();
  temperatureValue = dht.readTemperature();

  // If one of the sensor return an error, we stop the code here and we retry to get values.
  if (isnan(airHumidityValue) || isnan(temperatureValue) || isnan(moistureValue)) {
    Serial.println("Failed to read from DHT sensor, retry !");
    return;
  }

  // Calibration and reading of getting values.
  if (moistureValue > 300 && moistureValue < 700) {
    // Sensor in humid soil
    moistureState = "Humid soil";
  } else if (moistureValue > 700 && moistureValue < 950) {
    // Sensor in water
    moistureState = "In water";
  } else {
    // Sensor in dry soil
    moistureState = "Dry soil";
  }

  // Draw results in Serial Monitor
  Serial.print("Air Humidity : ");
  Serial.print(airHumidityValue);
  Serial.print(" % (±2%)\t");
  Serial.print("Ambient Temperature : ");
  Serial.print(temperatureValue);
  Serial.println(" °C (±0.5)\t");
  //Serial.print("Soil state : ");
  //Serial.print(moistureState);
  //Serial.println("(" + String(moistureValue) + ")");
}
