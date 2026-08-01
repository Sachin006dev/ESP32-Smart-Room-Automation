#include "DHTesp.h"
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define DHTPIN 15
DHTesp dhtSensor;
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define PIR_PIN 18
#define LED_PIN 23
#define FAN_LED 19

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);


void setup() {
  Serial.begin(115200);
  delay(1000);
  Wire.begin(21,22);
  //Serial.println("HELLO");
  dhtSensor.setup(15, DHTesp::DHT22);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
  Serial.println("OLED Failed");
  while (true);

  //pinMode(LED_PIN, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(19, OUTPUT);
}

display.clearDisplay();
display.setTextSize(2);
display.setTextColor(SSD1306_WHITE);
display.setCursor(8, 10);
display.println("SMART");
display.setCursor(15, 35);
display.println("ROOM");
display.display();

}

void loop() {

  //Serial.println("RUNNING");
  delay(1000);
  TempAndHumidity data = dhtSensor.getTempAndHumidity();

Serial.print("Temperature: ");
Serial.print(data.temperature);
Serial.println(" °C");

Serial.print("Humidity: ");
Serial.print(data.humidity);
Serial.println(" %");
  delay(2000);

  int motion = digitalRead(PIR_PIN);

  display.clearDisplay();

display.setTextSize(1);
display.setTextColor(SSD1306_WHITE);

display.setCursor(18,0);
display.println("SMART ROOM");

display.drawLine(0,10,128,10,SSD1306_WHITE);

display.setCursor(0,15);
display.print("Temp: ");
display.print(data.temperature);
display.println(" C");

display.setCursor(0,27);
display.print("Hum : ");
display.print(data.humidity);
display.println(" %");

display.setCursor(0,39);
display.print("Motion: ");
display.println(motion ? "YES" : "NO");

display.setCursor(0,51);
display.print("Light : ");
display.println(motion ? "ON" : "OFF");

display.setCursor(70, 51);
display.print("Fan : ");

if (data.temperature > 30) {
  display.println("ON");
} else {
  display.println("OFF");
}

display.display();

  Serial.print("Motion: ");
  Serial.println(motion);

//{
  //if (motion==HIGH) { 
    //digitalWrite(23, HIGH); 
   //Serial.println("LED ON"); 
   //} 
  //else { 
    //digitalWrite(23, LOW); 
   //Serial.println("LED OFF"); 
//}
  
  //if (data.temperature > 30) { 
    //digitalWrite(19, HIGH); 
   //Serial.println("FAN ON"); 
   //} 
  //else { 
    //digitalWrite(19, LOW); 
   //Serial.println("FAN OFF"); 
   //} 
   //} 
   }


