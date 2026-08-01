# ESP32-Smart-Room-Automation
A real-time smart room monitoring system using ESP32, DHT22, PIR Motion Sensor and OLED Display.

Project Overview:
This project simulates a smart room automation system using an ESP32 microcontroller. It continuously monitors temperature, humidity, and human motion, then displays the room status on an OLED screen.

The system automatically determines whether the room light and fan should be ON or OFF based on sensor readings.

Features
✅ Real-time Temperature Monitoring
✅ Real-time Humidity Monitoring
✅ Motion Detection using PIR Sensor
✅ Automatic Light Status
✅ Automatic Fan Status
✅ Live OLED Dashboard

Components Used
Component	            Quantity
ESP32 DevKit V1	         1
DHT22 Sensor	           1
PIR Motion Sensor	       1
SSD1306 OLED Display	   1

Circuit Diagram:
<h2 align="center">Circuit Diagram</h2>
<p align="center">
<img width="931" height="581" alt="Circuit" src="https://github.com/user-attachments/assets/c314f07d-25a5-43bb-a605-a879e3d01b5c" />
</p>

OLED Dashboard:
<h2 align="center">OLED Dashboard/h2>
<p align="center">
<img width="355" height="259" alt="Screenshot 2026-08-01 195721" src="https://github.com/user-attachments/assets/20a089f6-e1d0-43d8-95a4-2ce4747f59a5" />
</p>

Working:
Temperature Monitoring
The DHT22 continuously measures temperature and humidity.
When
  Temperature > 30°C
the system changes
  Fan → ON
Otherwise
  Fan → OFF

 Motion Detection
 The PIR sensor detects movement
 If motion is detected
   Light → ON
 Otherwise
   Light → OFF

Demonstration:
https://github.com/user-attachments/assets/a31afdef-545e-4684-831d-4967c3a6b1bc









