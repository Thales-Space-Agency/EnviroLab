# EnviroLab 🌌🌡️

## Overview 🌐
EnviroLab is an Arduino-based environmental monitoring system designed to simulate conditions similar to those on a space station. It uses sensors to collect data on temperature, air humidity, and soil moisture.

## Features 🚀
- **Temperature Monitoring**: Record ambient temperature using a DHT sensor.
- **Humidity Sensing**: Track environmental moisture levels with the same DHT sensor.
- **Soil Moisture Analysis**: Determine soil conditions using a separate moisture sensor.
- **Data Transmission**: Utilize an Ethernet shield to transmit data for further analysis.

## Hardware Requirements 🛠️
- Arduino Board
- Grove Shield
- Ethernet Shield
- DHT22 Temperature and Humidity Sensor
- Soil Moisture Sensor

## Software Requirements 💻
- Arduino IDE
- DHT sensor library for Arduino

## DHT Sensor Library Installation 📚
To install the DHT sensor library, follow these steps:
1. Open the Arduino IDE.
2. Go to `Sketch` > `Include Library` > `Manage Libraries...`
3. In the Library Manager, enter `DHT sensor library` in the search box.
4. Find the DHT sensor library by Adafruit and click `Install`.

## Setup and Installation 📋
1. Connect the DHT sensor and the soil moisture sensor to the Arduino according to their respective documentation.
2. Install the DHT sensor library using the instructions above.
3. Upload the provided Arduino sketch to the board.

## Usage 💡
Once the system is set up and the code is uploaded:
1. Open the Arduino IDE Serial Monitor to view the sensor readings.
2. Observe the temperature, humidity, and soil moisture data as it updates.

## Contributing 🤝
Feel free to fork this repository, contribute to the code, or provide feedback on potential improvements. For major changes, please open an issue first to discuss what you would like to change.

## License 📄
This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details.

## Acknowledgements 🌟
Special thanks to the community and to all contributors who have helped with advice, contributions, and support.

---
🚀 *EnviroLab - Monitoring our world, one sensor at a time.* 🚀
