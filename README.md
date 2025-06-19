# Project LE GARDIEN - 🪴Plant Monitoring and Automated Watering System🪴


## Description


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
2. **Upload the Code**: Open the Arduino IDE, upload the provided code to the NodeMCU. 

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

For detailed instructions on how to connect the components, refer to the [circuit diagram description]

