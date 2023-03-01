#include "U8glib.h"
#define trigPin 7
#define echoPin 6

U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE|U8G_I2C_OPT_DEV_0);

void u8g_prepare(void) 
{
  u8g.setFont(u8g_font_10x20); // use a larger font size
  u8g.setFontRefHeightExtendedText();
  u8g.setDefaultForegroundColor();
  u8g.setFontPosTop();
}



void drawDistance(int distance) {
  u8g.setFont(u8g_font_10x20);
//  u8g.drawStr(10, 20, "Distance:");
  u8g.drawStr(10, 20, String(distance).c_str());
   u8g.drawStr(50, 20, "cm");
//  u8g.print("cm");
}

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  u8g_prepare();
}

void loop() {
  long duration, cm;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  cm = (duration / 2) / 29.1; // calculate distance in cm
  u8g.firstPage();  
  do {
    drawDistance(cm);
  } while ( u8g.nextPage() );
  delay(1000);
}
