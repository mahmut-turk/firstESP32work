#include <Arduino.h>

int analogPin = 32;   // Sensör bağlı analog pin
int ledPin = 33;      // LED bağlı çıkış pin
const int freq = 5000;     // PWM frekansı
const int ledChannel = 0;  // PWM kanalı (0-15)
const int resolution = 8;  // PWM çözünürlüğü (8-bit: 0-255)

void setup() {
  Serial.begin(115200);
  analogReadResolution(12); 
  ledcSetup(ledChannel, freq, resolution);
  ledcAttachPin(ledPin, ledChannel);
}

void loop() {
  int sensorValue = analogRead(analogPin); // 0 - 1023 arası değer
  Serial.println(sensorValue);
 
  int pwmValue = map(sensorValue, 0, 4095, 0, 255);
  ledcWrite(ledChannel, pwmValue);
  
   delay(50); // 50 mili saniye aralıklarla okuma
}

