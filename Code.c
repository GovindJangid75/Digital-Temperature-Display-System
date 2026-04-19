```cpp
// ============================================================
// DIGITAL TEMPERATURE DISPLAY SYSTEM
// Author : TechnoCrafts
// Platform : Arduino UNO (ATmega328P)
// Sensor : DS18B20 (1-Wire)
// Display : 16x2 I2C LCD
// Alert : Active Buzzer
// ============================================================

// -------------------- Libraries ------------------------------
#include <OneWire.h>
#include <DallasTemperature.h>
#include <LiquidCrystal_I2C.h>

// -------------------- Pin Definitions ------------------------
#define ONE_WIRE_BUS 2     // DS18B20 Data Pin → D2
#define BUZZER_PIN   9     // Buzzer → D9

// -------------------- Constants ------------------------------
#define TEMP_THRESHOLD 40.0   // Temperature alert threshold
#define BAUD_RATE 9600
#define SAMPLE_DELAY 1000

// -------------------- LCD Setup ------------------------------
#define LCD_ADDR 0x27
#define LCD_COLS 16
#define LCD_ROWS 2

// -------------------- Object Creation ------------------------
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);
LiquidCrystal_I2C lcd(LCD_ADDR, LCD_COLS, LCD_ROWS);

// -------------------- Setup Function -------------------------
void setup() {
  Serial.begin(BAUD_RATE);

  // Initialize sensor
  sensors.begin();
  sensors.setResolution(12);

  // Initialize LCD
  lcd.init();
  lcd.backlight();

  // Initialize buzzer
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW);

  // Welcome Screen
  lcd.setCursor(0, 0);
  lcd.print(" Temp Monitor ");
  lcd.setCursor(0, 1);
  lcd.print(" DS18B20 + I2C ");
  delay(2000);
  lcd.clear();

  Serial.println("=================================");
  Serial.println(" Digital Temperature System ");
  Serial.println("=================================");
}

// -------------------- Loop Function --------------------------
void loop() {

  // Request temperature
  sensors.requestTemperatures();

  float tempC = sensors.getTempCByIndex(0);

  // Sensor Error Handling
  if (tempC == DEVICE_DISCONNECTED_C) {
    showError();
    delay(SAMPLE_DELAY);
    return;
  }

  // Display temperature
  displayTemperature(tempC);

  // Handle alert
  handleAlert(tempC);

  // Serial Output
  logToSerial(tempC);

  delay(SAMPLE_DELAY);
}

// -------------------- Functions ------------------------------

// Display temperature on LCD
void displayTemperature(float tempC) {
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(tempC, 2);
  lcd.print(" C   ");
}

// Handle buzzer alert
void handleAlert(float tempC) {
  lcd.setCursor(0, 1);

  if (tempC >= TEMP_THRESHOLD) {
    digitalWrite(BUZZER_PIN, HIGH);
    lcd.print(" ALERT! HOT! ");
  } else {
    digitalWrite(BUZZER_PIN, LOW);
    lcd.print(" Normal      ");
  }
}

// Serial logging
void logToSerial(float tempC) {
  Serial.print("Temperature: ");
  Serial.print(tempC, 2);
  Serial.println(" C");

  if (tempC >= TEMP_THRESHOLD) {
    Serial.println("[ALERT] Temperature exceeded!");
  }

  Serial.println("--------------------------");
}

// Error display
void showError() {
  lcd.setCursor(0, 0);
  lcd.print(" Sensor Error! ");
  lcd.setCursor(0, 1);
  lcd.print(" Check Wiring  ");

  Serial.println("[ERROR] Sensor not detected!");
}
```
