# Smart Home Power Monitoring and Control System

This project is a compact, microcontroller-based system designed to monitor electrical load usage and control appliances in a smart home environment. It enables real-time current sensing, overcurrent protection, and automated load control using relay modules. Designed with a custom PCB and written in Embedded C, the system communicates with sensors and actuators via standard protocols like I2C and SPI.

## 🚀 Features

- Real-time current sensing using I2C-based current sensors
- Relay-based switching for automated load control
- Embedded firmware for threshold-based decision making
- Custom 2-layer PCB for compact integration of components
- UART communication for debugging and future GSM/GPS expansion
- Modular, scalable design for multi-load monitoring

## 🔧 Technologies Used

- **Embedded C** – Firmware development for microcontroller
- **Custom PCB Design** – 2-layer board for sensor, relay, and MCU integration
- **I2C Protocol** – Communication with current sensors
- **SPI Protocol** – Support for future TFT display interface
- **UART** – Serial debugging and peripheral interfacing
- **Microcontroller** – Lightweight, low-power MCU with GPIO, ADC, and timer capabilities

## 📐 System Overview

The system continuously monitors the current flowing through connected loads. If a load exceeds a predefined threshold, the relay is automatically turned off to prevent damage or power waste. The logic runs entirely on a standalone embedded system without needing cloud connectivity.

![System Diagram](docs/system_diagram.png)

## 🧠 How It Works

1. The microcontroller reads real-time current data via I2C from onboard sensors.
2. If current exceeds the threshold (e.g., 5A), the system disables the relay to disconnect the load.
3. The status can be extended to display on a screen or be sent over UART to a logging device.
4. Sampling occurs at regular intervals with debouncing to avoid false triggers.

## 📁 File Structure

