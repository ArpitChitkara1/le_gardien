# Project LE GARDIEN - 🪴Plant Monitoring and Automated Watering System🪴

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
![Issues](https://img.shields.io/github/issues/kshreyashreee/le_gardien.svg)

## Description

This project was done as a part of the Live In Lab Project done at Sri Sai Ram Engineering College during the academic year 2021-2022. The team members are:

- Kalaimathy RD [![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/kalaimathy-ravi-49464a206/)
- Deepika R [![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/deepika-r-730532206/)
- Shreya Shree [![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/kshreyashree/)

This project is an IoT-based plant monitoring system capable of automating the watering process by analyzing the soil's moisture content. Sensor data is displayed on a mobile phone using the Blynk application. The main objective is to design and implement an IoT-based smart plant monitoring system using NodeMCU (ESP8266), an open-source IoT platform.

### Key Components

- NodeMCU ESP8266
- Soil Moisture Sensor Module
- DHT11 (Humidity and Temperature Sensor)
- 3-6V Mini Water Pump (Submersible)
- Relay Module
- Jumping Wires
- 9V Battery

This project includes both hardware and software. The hardware part involves building the circuit with the listed components. The software part utilizes the Blynk application for a digital dashboard and the Arduino IDE for coding.

## Table of Contents

- [Features](#features)
- [Hardware Requirements](#hardware-requirements)
- [Software Requirements](#software-requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Circuit Diagram](#circuit-diagram)
- [IEEE Paper](#ieee-paper)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## Features

- **Automated Watering**: Automatically waters plants based on soil moisture levels.
- **Real-time Monitoring**: Monitor soil moisture, temperature, and humidity in real-time.
- **Mobile Dashboard**: View sensor data and control the system via the Blynk app.

## Hardware Requirements

- NodeMCU ESP8266
- Soil Moisture Sensor Module
- DHT11 Sensor
- 3-6V Mini Water Pump
- Relay Module
- Jumping Wires
- 9V Battery

## Software Requirements

- [Arduino IDE](https://www.arduino.cc/en/software)
- [Blynk Application](https://blynk.io/)

## Installation

### Hardware Setup

1. **Connect the Components**: Follow the circuit diagram to connect the NodeMCU, sensors, relay module, water pump, and battery.
2. **Upload the Code**: Open the Arduino IDE, upload the provided code to the NodeMCU. The code can be found [here](https://github.com/kshreyashreee/le_gardien/blob/main/Plant_Monitoring_and_Automated_Watering_system_code.ino).

### Software Setup

1. **Install Blynk App**: Download and install the Blynk app from the App Store or Google Play.
2. **Create a New Project**: In the Blynk app, create a new project and add the necessary widgets for monitoring and control.
3. **Configure Widgets**: Configure the widgets to display soil moisture, temperature, humidity, and control the water pump.

## Usage

1. **Power the System**: Ensure the NodeMCU and other components are powered.
2. **Open Blynk App**: Open the Blynk app on your mobile device.
3. **Monitor and Control**: View real-time sensor data and control the water pump via the app.

### Sample Commands

1. **Start Monitoring**: Automatically starts upon powering the system.
2. **Manual Watering**: Use the Blynk app to manually control the water pump.

## Circuit Diagram

For detailed instructions on how to connect the components, refer to the [circuit diagram description](https://github.com/kshreyashreee/le_gardien/blob/main/Complete%20Setup%20of%20the%20project.png).

## IEEE Paper

For a detailed explanation and scientific analysis of this project, refer to our published IEEE paper: [Link to IEEE Paper](https://ieeexplore.ieee.org/document/10449260).

## Contributing

Contributions are what make the open-source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## License

Distributed under the MIT License. See `LICENSE` for more information.

## Contact

Shreya Shree - [@iamksshree](https://twitter.com/iamksshree) - notshreyashree@gmail.com

Project Link: [https://github.com/kshreyashreee/kshreyashreee](https://github.com/kshreyashreee/kshreyashreee)
