# 🏠 ESP32 Smart Room Automation

A real-time Smart Room Automation system using **ESP32**, **DHT22**, **PIR Motion Sensor**, and an **OLED Display**.

---

## 📖 Project Overview

This project simulates a smart room automation system using an ESP32 microcontroller. It continuously monitors:

- 🌡️ Temperature
- 💧 Humidity
- 🚶 Motion

The system automatically determines whether the room light and fan should be **ON** or **OFF** based on sensor readings and displays the information on an OLED screen.

---

## ✨ Features

- ✅ Real-time Temperature Monitoring
- ✅ Real-time Humidity Monitoring
- ✅ Motion Detection using PIR Sensor
- ✅ Automatic Light Status
- ✅ Automatic Fan Status
- ✅ Live OLED Dashboard

---

## 🛠️ Components Used

| Component | Quantity |
|-----------|---------:|
| ESP32 DevKit V1 | 1 |
| DHT22 Sensor | 1 |
| PIR Motion Sensor | 1 |
| SSD1306 OLED Display | 1 |

Circuit Diagram:
<h2 align="center">Circuit Diagram</h2>
<p align="center">
<img width="931" height="581" alt="Circuit" src="https://github.com/user-attachments/assets/c314f07d-25a5-43bb-a605-a879e3d01b5c" />
</p>

OLED Dashboard:
<h2 align="center">OLED Dashboard</h2>
<p align="center">
<img width="355" height="259" alt="Screenshot 2026-08-01 195721" src="https://github.com/user-attachments/assets/20a089f6-e1d0-43d8-95a4-2ce4747f59a5" />
</p>

## ⚙️ Working

### 🌡️ Temperature Monitoring

- Reads temperature and humidity using the DHT22 sensor.
- If the temperature exceeds **30°C**, the fan status changes to **ON**.
- Otherwise, the fan remains **OFF**.

### 🚶 Motion Detection

- Detects motion using the PIR sensor.
- If motion is detected:
  - 💡 Light Status → **ON**
- If no motion is detected:
  - 🌑 Light Status → **OFF**

---

## 🎥 Demonstration

*A demo video of the project is available in the `Demo` folder.*

---

## 🚀 Future Improvements

- Relay-controlled appliances
- IoT connectivity
- Mobile app monitoring
- Blynk integration
- Firebase cloud logging

---

## 👨‍💻 Developed Using

- Arduino IDE
- ESP32
- Wokwi Simulator
- DHTesp Library
- Adafruit SSD1306 Library

## 🎥 Demonstration

A short demonstration of the Smart Room Automation project is available below.

[▶️ Watch the Demo](

https://github.com/user-attachments/assets/854f0952-f69e-45d1-b118-44142617286e

 )








