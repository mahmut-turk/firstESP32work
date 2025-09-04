# ESP32 Analog LED PWM Control

This project demonstrates reading analog data from a potentiometer on an ESP32 and controlling the brightness of an LED using PWM (Pulse Width Modulation).
#### watch the video !! ####
---

## 📌 Features
- Reads analog values from a potentiometer (0-4095, 12-bit ADC)  
- Controls LED brightness smoothly using PWM  
- Displays sensor values on the Serial Monitor  

---

## 🛠 Required Hardware
- ESP32 development board  
- Potentiometer  
- LED  
- 220Ω resistor (for LED)  
- Jumper wires  
- USB cable (data-capable)  

---

## ⚡ Connections
| Component       | ESP32 Pin |
|-----------------|-----------|
| Potentiometer   | GPIO 32   |
| LED             | GPIO 33   |
| LED Resistor    | Series with LED to GND |

> Connect the middle pin of the potentiometer to **GPIO32**, and the other two pins to **3.3V and GND**.  
> Connect the long leg of the LED to **GPIO33** and the short leg to **GND** through a 220Ω resistor.  

---

## 💻 Setup and Code

1. Open Arduino IDE or PlatformIO.  
2. Select your ESP32 board.  
3. Upload the code.

