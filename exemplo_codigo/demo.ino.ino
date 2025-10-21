// exemplo_codigo/demo.ino
#include <Wire.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display(128, 64, &Wire);

void setup() {
  Serial.begin(9600);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println("SmartCare - Exemplo");
  display.display();
}

void loop() {
  // Exemplo de leitura de sensor
  int sensor = analogRead(34);
  Serial.println(sensor);
  delay(1000);
}
