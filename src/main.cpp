#include <Arduino.h>

int analogPin = 32;   // potentiometer connected analog input pin
int ledPin = 33;      // LED connected output pin
const int freq = 5000;     // PWM frequence
const int ledChannel = 0;  // PWM channel (0-15)
const int resolution = 8;  // PWM resolution (8-bit: 0-255)

void setup() {
  Serial.begin(115200);
  analogReadResolution(12); 
  ledcSetup(ledChannel, freq, resolution);
  ledcAttachPin(ledPin, ledChannel);
}

void loop() {
  int sensorValue = analogRead(analogPin); // values between 0 - 4095
  Serial.println(sensorValue);
 
  int pwmValue = map(sensorValue, 0, 4095, 0, 255);  // change the resolution from 0-4095 to 0-255
  ledcWrite(ledChannel, pwmValue);
  
   delay(50); // reading in 50 milisecond intervals
}

