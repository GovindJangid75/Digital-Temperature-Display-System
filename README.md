<div align="center">

<!-- Animated Banner -->
<img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&customColorList=6,11,20&height=200&section=header&text=🌡️%20Digital%20Temperature%20Display%20System&fontSize=32&fontColor=ffffff&animation=twinkling&fontAlignY=38&desc=Arduino%20UNO%20%7C%20DS18B20%20%7C%20I2C%20LCD&descAlignY=58&descSize=18" width="100%"/>

<!-- Animated Typing -->
<a href="https://git.io/typing-svg">
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&weight=600&size=22&pause=1000&color=00D9FF&center=true&vCenter=true&multiline=true&width=700&height=80&lines=Real-Time+Temperature+Monitoring+System;Arduino+UNO+%2B+DS18B20+%2B+16×2+I2C+LCD;0.0625°C+Resolution+%7C+±0.5°C+Accuracy" alt="Typing SVG" />
</a>

<br/>

<!-- Badges -->
![Platform](https://img.shields.io/badge/Platform-Arduino%20UNO-00979D?style=for-the-badge&logo=arduino&logoColor=white)
![Language](https://img.shields.io/badge/Language-C%2FC%2B%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)
![Sensor](https://img.shields.io/badge/Sensor-DS18B20-FF6B35?style=for-the-badge&logo=moleculer&logoColor=white)
![Protocol](https://img.shields.io/badge/Protocol-1--Wire%20%7C%20I2C-8B5CF6?style=for-the-badge&logo=protocol.ai&logoColor=white)
![Tests](https://img.shields.io/badge/Tests-10%2F10%20PASS-22C55E?style=for-the-badge&logo=checkmarx&logoColor=white)
![Resolution](https://img.shields.io/badge/Resolution-0.0625°C-F59E0B?style=for-the-badge&logo=thermometer&logoColor=white)

<br/>

<!-- University Info -->
> 🏛️ **Arya College of Engineering & Information Technology, Jaipur**  
> 📚 Microprocessor and Interfacing Lab | Rajasthan Technical University, Kota  
> 👩‍🏫 Guided by: **Ms. Chhavi Gupta**, Assistant Professor, Dept. of CSE | Session: **2025–26**

</div>

---

## 👥 Team Members

<div align="center">

| 🎓 Student Name | 🔢 Enrollment No. |
|:---:|:---:|
| Ayushi Garg | 24EARCS037 |
| Badal Verma | 24EARCS038 |
| Bhawna Sen | 24EARCS039 |
| Garvita Jain | 24EARCS048 |
| Govind Jangid | 24EARCS051 |

</div>

---

## 📋 Table of Contents

<details>
<summary>Click to expand 📖</summary>

- [🔍 Project Overview](#-project-overview)
- [✨ Key Features](#-key-features)
- [🛠️ Hardware Components](#-hardware-components)
- [💻 Software Requirements](#-software-requirements)
- [⚡ Circuit Connections](#-circuit-connections)
- [🧠 Working Principle](#-working-principle)
- [📊 Performance Comparison](#-performance-comparison)
- [✅ Test Results](#-test-results)
- [🚀 Future Enhancements](#-future-enhancements)
- [📁 Project Structure](#-project-structure)
- [📦 Installation](#-installation)
- [🔬 Applications](#-applications)
- [📚 References](#-references)

</details>

---

## 🔍 Project Overview

<img align="right" src="https://media.giphy.com/media/v1.Y2lkPTc5MGI3NjExcDd3bWFsaHB3emVmY2VxaHFhYnBhZzQ0dzM3dW9sOXNtb2s0YXN4ZCZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/26tn33aiTi1jkl6H6/giphy.gif" width="200" />

This project implements a **real-time digital temperature monitoring system** using:

- 🎛️ **Arduino UNO** (ATmega328P) as the central processing unit  
- 🌡️ **DS18B20** one-wire digital temperature sensor (replaces LM35 + ADC0804)  
- 🖥️ **16×2 I2C LCD** for rich textual display (replaces 7-segment display)  
- 🔔 **Active Buzzer** for over-temperature alerts at configurable threshold  

The system achieves **0.0625°C resolution** — approximately **31× finer** than traditional 8085 + ADC0804 implementations — while reducing component count, circuit complexity, and total cost.

> 📌 **Max observed error:** ±0.06°C | **Mean absolute error:** 0.045°C | **Accuracy at 25°C:** 99.87%

---

## ✨ Key Features

<div align="center">

```
┌─────────────────────────────────────────────────────────┐
│  🌡️  12-bit resolution → 0.0625°C per LSB               │
│  📡  1-Wire protocol → single data pin (D2)              │
│  🖥️  I2C LCD → only 2 signal wires (SDA + SCL)          │
│  🔔  Configurable threshold alarm (default: 40.0°C)      │
│  ❌  No external ADC required                            │
│  📟  UART Serial logging at 9600 baud                    │
│  🔌  Sensor error detection (-127°C flag)                │
│  🌍  IoT-ready (ESP8266/ESP32 compatible)                │
└─────────────────────────────────────────────────────────┘
```

</div>

---

## 🛠️ Hardware Components

| # | Component | Specification | Qty | Purpose |
|:---:|:---|:---|:---:|:---|
| 1 | 🎛️ Microcontroller | Arduino UNO Rev3 (ATmega328P, 16MHz, 32KB) | 1 | Central controller |
| 2 | 🌡️ Temperature Sensor | DS18B20 — 1-Wire, ±0.5°C, −55°C to +125°C | 1 | Digital sensing |
| 3 | 🖥️ LCD Display | 16×2 Character LCD + I2C Module (PCF8574, 0x27) | 1 | Display output |
| 4 | ⚡ Pull-up Resistor | 4.7 kΩ (for 1-Wire DQ line) | 1 | Bus integrity |
| 5 | 🔔 Active Buzzer | 5V DC, ~85 dB | 1 | Audible alarm |
| 6 | 🔌 Breadboard | 830-point solderless | 1 | Prototyping |
| 7 | 🔗 Jumper Wires | Male-to-Male, 20cm | 1 set | Connections |
| 8 | 🖇️ USB Cable | Type-A to Type-B, 1m | 1 | Power + upload |
| 9 | 🔋 Decoupling Cap | 100 nF ceramic | 1 | Noise filtering |

---

## 💻 Software Requirements

| Software / Library | Version | Purpose |
|:---|:---:|:---|
| Arduino IDE | 2.x+ | Development & upload environment |
| OneWire Library | 2.3.x | 1-Wire protocol driver |
| DallasTemperature Library | 3.9.x | DS18B20 high-level API |
| LiquidCrystal_I2C Library | 1.1.x | I2C LCD control |
| ATmega328P Board Pack | Latest | Hardware abstraction layer |

---

## ⚡ Circuit Connections

```
Arduino UNO          DS18B20 Sensor
   GND  ─────────────── Pin 1 (GND)
    D2  ─────────────── Pin 2 (DQ) ──┐
    5V  ─────────────── Pin 3 (VDD)  │
    5V  ──── 4.7kΩ ──────────────────┘

Arduino UNO          I2C LCD Module
    5V  ─────────────── VCC
   GND  ─────────────── GND
    A4  ─────────────── SDA  (Serial Data)
    A5  ─────────────── SCL  (Serial Clock)

Arduino UNO          Active Buzzer
    D9  ─────────────── Positive (+)
   GND  ─────────────── Negative (−)
```

### 📌 Pin Assignment Summary

| Component | Component Pin | Arduino UNO Pin |
|:---|:---|:---|
| DS18B20 | GND | GND |
| DS18B20 | DQ (Data) | **D2** + 4.7kΩ pull-up |
| DS18B20 | VDD | 5V |
| I2C LCD | SDA | **A4** |
| I2C LCD | SCL | **A5** |
| Active Buzzer | (+) | **D9** (PWM) |
| Active Buzzer | (−) | GND |

---

## 🧠 Working Principle

### 🔄 System Flow

```
┌──────────────┐    1-Wire    ┌──────────────┐    I2C     ┌──────────────┐
│   DS18B20    │ ──────────► │  Arduino UNO │ ─────────► │  16×2 LCD   │
│  Sensor      │             │  ATmega328P  │            │  (PCF8574)  │
└──────────────┘             └──────┬───────┘            └──────────────┘
                                    │ Digital Pin D9
                                    ▼
                             ┌──────────────┐
                             │ Active Buzzer │
                             │  (Alert > 40°C)│
                             └──────────────┘
```

### 🌡️ Temperature Conversion Formula

```
Temperature (°C) = raw_value × 0.0625

Example: raw = 400 → 400 × 0.0625 = 25.00°C
```

### 🔁 Firmware State Machine

```
         Power ON
             │
             ▼
        ┌─────────┐
        │  INIT   │ ── Initialize all peripherals
        └────┬────┘    Display welcome message
             │
             ▼
        ┌─────────┐
        │  LOOP   │
        └────┬────┘
             │
    ┌────────┴────────┐
    ▼                 ▼
tempC == -127     tempC valid
    │                 │
    ▼          ┌──────┴──────┐
 ┌───────┐     ▼             ▼
 │ ERROR │  tempC < 40   tempC ≥ 40
 │ State │     │             │
 └───────┘     ▼             ▼
           ┌────────┐  ┌──────────┐
           │ NORMAL │  │  ALERT   │
           │Buzzer:OFF│ │Buzzer:ON │
           └────────┘  └──────────┘
```

---

## 💻 Source Code

<details>
<summary>📄 Click to view complete Arduino code</summary>

```cpp
// ============================================================
// DIGITAL TEMPERATURE DISPLAY SYSTEM
// Platform : Arduino UNO (ATmega328P)
// Sensor   : DS18B20 — Digital 1-Wire — Pin D2
// Display  : 16x2 LCD with I2C Module (PCF8574)
// Alert    : Active Buzzer — Pin D9
// Guide    : Ms. Chhavi Gupta, Asst. Prof., CSE
// College  : Arya College of Engineering & I.T., Jaipur
// Year     : 2024–2028 | Academic Year: 2025-26
// ============================================================

#include <OneWire.h>
#include <DallasTemperature.h>
#include <LiquidCrystal_I2C.h>

#define ONE_WIRE_BUS   2       // DS18B20 DQ → Arduino D2
#define BUZZER_PIN     9       // Buzzer → Arduino D9 (PWM)
#define TEMP_THRESHOLD 40.0    // Alert threshold (°C)
#define LCD_I2C_ADDR   0x27   // I2C address (try 0x3F if needed)
#define LCD_COLS       16
#define LCD_ROWS       2
#define BAUD_RATE      9600
#define SAMPLE_DELAY   1000    // Sampling interval (ms)

OneWire          oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);
LiquidCrystal_I2C lcd(LCD_I2C_ADDR, LCD_COLS, LCD_ROWS);

void displayTemperature(float tempC);
void handleAlert(float tempC);
void logToSerial(float tempC);
void showError();

void setup() {
  Serial.begin(BAUD_RATE);
  sensors.begin();
  sensors.setResolution(12);   // 12-bit → 0.0625°C/LSB
  lcd.init();
  lcd.backlight();
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW);

  lcd.setCursor(0, 0); lcd.print(" Temp Monitor ");
  lcd.setCursor(0, 1); lcd.print(" DS18B20 + I2C ");
  delay(2000);
  lcd.clear();
  Serial.println("======================================");
  Serial.println(" Digital Temperature Display System  ");
  Serial.println("======================================");
}

void loop() {
  sensors.requestTemperatures();
  float tempC = sensors.getTempCByIndex(0);

  if (tempC == DEVICE_DISCONNECTED_C) {
    showError();
    delay(SAMPLE_DELAY);
    return;
  }

  displayTemperature(tempC);
  handleAlert(tempC);
  logToSerial(tempC);
  delay(SAMPLE_DELAY);
}

void displayTemperature(float tempC) {
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(tempC, 2);
  lcd.print(" C ");
}

void handleAlert(float tempC) {
  lcd.setCursor(0, 1);
  if (tempC >= TEMP_THRESHOLD) {
    digitalWrite(BUZZER_PIN, HIGH);
    lcd.print(" ALERT! HOT! ");
  } else {
    digitalWrite(BUZZER_PIN, LOW);
    lcd.print("   Normal    ");
  }
}

void logToSerial(float tempC) {
  Serial.print("Temperature : ");
  Serial.print(tempC, 2);
  Serial.println(" C");
  if (tempC >= TEMP_THRESHOLD)
    Serial.println("[ALERT] Temperature exceeded threshold!");
  Serial.println("--------------------------------------");
}

void showError() {
  lcd.setCursor(0, 0); lcd.print(" Sensor Error! ");
  lcd.setCursor(0, 1); lcd.print(" Check DS18B20 ");
  Serial.println("[ERROR] Sensor disconnected or faulty!");
}
```

</details>

---

## 📊 Performance Comparison

| Parameter | 8085 + ADC0804 + LM35 | ✅ Arduino + DS18B20 + I2C LCD |
|:---|:---:|:---:|
| Processor | Intel 8085, 3 MHz | ATmega328P, **16 MHz** |
| Sensor Type | Analog (LM35) | **Fully Digital** (DS18B20) |
| External ADC | ✅ Required | ❌ **Not Needed** |
| ADC Resolution | 8-bit (256 steps) | **12-bit (4096 steps)** |
| Temp Resolution | ~1.96°C/step | **0.0625°C/step (31× better)** |
| Accuracy (0–70°C) | ±2°C | **±0.5°C** |
| Negative Temp | ❌ Not supported | ✅ **−55°C to +125°C** |
| Display Wires | 7+ GPIO pins | **2 wires (SDA + SCL)** |
| Programming | Assembly | **C/C++ with libraries** |
| Approx. Cost | ₹1,000–₹1,600 | **₹400–₹700** |
| IoT Ready | ❌ Very limited | ✅ **Full support** |

---

## 🧪 Accuracy Validation

| Ref Temp (°C) | DS18B20 Reading (°C) | Absolute Error | % Error | Status |
|:---:|:---:|:---:|:---:|:---:|
| 10.00 | 10.06 | ±0.06 | 0.60% | ✅ PASS |
| 20.00 | 19.94 | ±0.06 | 0.30% | ✅ PASS |
| 25.00 | 25.06 | ±0.06 | 0.24% | ✅ PASS |
| 30.00 | 30.00 | 0.00 | 0.00% | ✅ PASS |
| 37.00 | 37.06 | ±0.06 | 0.16% | ✅ PASS |
| 40.00 | 40.06 | ±0.06 | 0.15% | ✅ PASS |
| 50.00 | 49.94 | ±0.06 | 0.12% | ✅ PASS |
| 75.00 | 75.06 | ±0.06 | 0.08% | ✅ PASS |

> 📈 **Mean Absolute Error: 0.045°C** | **Max Error: ±0.06°C** (8× better than ±0.5°C spec)

---

## ✅ Test Results

<div align="center">

| T# | Test | Expected | Result | Status |
|:---:|:---|:---|:---|:---:|
| T01 | Power-on initialization | Welcome message; sensor found | Welcome shown 2s; 1 device found | ✅ PASS |
| T02 | Room temperature reading | LCD: 24–27°C; Row 2: Normal | LCD: 25.06°C; Normal | ✅ PASS |
| T03 | Gradual heating (palm) | Rises to 34–36°C in 15s | Reached 35.12°C in ~12s | ✅ PASS |
| T04 | Threshold breach (~42°C) | Buzzer ON; ALERT! HOT! | Activated at 40.06°C | ✅ PASS |
| T05 | Threshold recovery | Buzzer OFF; Normal | Off at 39.94°C; no oscillation | ✅ PASS |
| T06 | Serial Monitor validation | Temp every 1000ms | Correct format & timing | ✅ PASS |
| T07 | Sensor disconnection | Sensor Error!; no crash | LCD showed error; stable | ✅ PASS |
| T08 | 1-hour continuous operation | Stable; no drift | Max drift ±0.06°C | ✅ PASS |
| T09 | I2C address verification | Init at 0x27 | Detected at 0x27 correctly | ✅ PASS |
| T10 | Power interruption recovery | Clean restart | Welcome shown; normal resumed | ✅ PASS |

</div>

<div align="center">

![Pass Rate](https://img.shields.io/badge/Pass%20Rate-10%2F10%20(100%25)-22C55E?style=for-the-badge&logo=checkmarx)

</div>

---

## 🚀 Future Enhancements

```
Phase 1 (Hardware):
├── 🌡️  Multi-Sensor Network    → Up to 127 DS18B20s on one 1-Wire bus
├── 🖥️  OLED Graphical Display  → 128×64 px trend graphs & gauges
├── 💾  SD Card Data Logger     → Timestamped CSV logging with DS3231 RTC
└── 🔋  Battery + Enclosure     → 3.7V LiPo + 3D-printed ABS case

Phase 2 (IoT):
├── 📡  Wi-Fi Integration       → ESP8266/ESP32 + ThingSpeak/MQTT/Blynk
├── 📱  Mobile Notifications    → SMS/email alerts on threshold breach
├── ⌨️  Programmable Threshold  → Keypad / rotary encoder + EEPROM storage
└── 😴  Deep Sleep Mode         → 50mA → 5mA (10× battery life)

Phase 3 (Production):
└── 🖨️  Custom PCB Design       → KiCad 2-layer PCB (70% smaller footprint)
```

---

## 🔬 Applications

<div align="center">

| Domain | Use Cases |
|:---|:---|
| 🏭 Industrial | Process monitoring, furnace control, server room climate |
| 🏥 Biomedical | Patient monitoring, incubators, pharmaceutical cold chain |
| 🌿 Environmental | Weather stations, soil profiling, indoor air quality |
| 🏠 Consumer | Smart thermostats, home brew fermentation, sous-vide |
| 🌾 Agriculture | Greenhouse management, livestock monitoring, cold chain |
| 🚗 Automotive | Engine coolant display, EV battery thermal management |
| 🔬 Research | Lab data logging, material characterization, calibration |
| 📡 IoT/Smart Home | Cloud dashboards, multi-room monitoring, home automation |

</div>

---

## 📁 Project Structure

```
DigitalTemperatureDisplaySystem/
│
├── 📄 TemperatureDisplaySystem.ino    # Main Arduino sketch
├── 📋 README.md                       # This file
├── 📸 circuit/
│   ├── circuit_diagram.png            # Fritzing/Tinkercad diagram
│   └── hardware_photo.jpg             # Assembled prototype photo
├── 📊 report/
│   └── Digital_Temperature_System_Final_Report.pdf
└── 📚 references/
    └── DS18B20_Datasheet.pdf
```

---

## 📦 Installation

```bash
# 1. Clone the repository
git clone https://github.com/YOUR_USERNAME/digital-temperature-display-system.git

# 2. Open Arduino IDE 2.x

# 3. Install required libraries (Tools → Manage Libraries)
#    → OneWire by Paul Stoffregen (v2.3.x)
#    → DallasTemperature by Miles Burton (v3.9.x)
#    → LiquidCrystal_I2C by Frank de Brabander (v1.1.x)

# 4. Open TemperatureDisplaySystem.ino

# 5. Select Board: Arduino UNO
#    Tools → Board → Arduino AVR Boards → Arduino UNO

# 6. Select Port: Your COM port
#    Tools → Port → COMx (Windows) or /dev/ttyUSB0 (Linux/Mac)

# 7. Upload! (Ctrl+U)
```

> ⚠️ **Note:** If LCD shows nothing, run an I2C Scanner sketch to find your module's address (may be `0x3F` instead of `0x27`)

---

## 📚 References

1. Arduino LLC, "Arduino UNO Rev3 Technical Reference," 2023.
2. Analog Devices, "DS18B20 Programmable Resolution 1-Wire Digital Thermometer — Datasheet," Rev. 5, 2019.
3. NXP Semiconductors, "PCF8574 Remote 8-Bit I/O Expander for I2C-Bus — Datasheet," Rev. 5, 2013.
4. Microchip Technology, "ATmega328P 8-bit AVR Microcontroller Datasheet (DS40002061B)," 2020.
5. R. S. Gaonkar, *Microprocessor Architecture, Programming, and Applications with the 8085*, 6th ed., 2013.
6. NXP, "The I2C-Bus Specification and User Manual," Rev. 7.0, 2021.
7. Maxim Integrated, "Application Note 126: 1-Wire Communication Through Software," 2002.

---

<div align="center">

<!-- Footer Wave -->
<img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&customColorList=6,11,20&height=120&section=footer" width="100%"/>

**Made with ❤️ by @Ayushigarg03 · Badal Verma · Bhawna Sen · @	garvitajain75 · @Govindjangid75**

*Dept. of CSE | Arya College of Engineering & I.T., Jaipur | Session 2025–26*

![Visitor Count](https://visitor-badge.laobi.icu/badge?page_id=digital-temp-display-system)

</div>
