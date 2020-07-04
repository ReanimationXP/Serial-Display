#include <ArduinoSerialDisplay.h> //60*60
/* COLORS:
 *   DarkRed - dr - 4
 *   Red - r - c
 *   Gold - g - 6
 *   Yellow - y - e
 *   DarkGreen - dg - 2
 *   Green - g - a
 *   Aqua - aq - b
 *   DarkAqua - da - 3
 *   DarkBlue - db - 1
 *   Blue - b - 9
 *   LightPurple - lp - d
 *   DarkPurple - dp - 5
 *   White - w - f
 *   Gray - gr - 7
 *   DarkGray - dg - 8
 *   Black - bl - 0
 * 
 * CODE:
 *   background(color);
 *   square(x, y, width, height, color);
 *   pixel(x, y, color);
 */
 
ASD ASD(0);

void setup() {
  Serial.begin(1000000);
}

void loop() {
  ASD.background("Black");
  
  hello();
  world();
  
  delay(5000);
}

void hello() {
  for (int i = 1; i < 6; i++) {
    ASD.pixel(1, i, "White");
  }
  ASD.pixel(2, 3, "White");
  for (int i = 1; i < 6; i++) {
    ASD.pixel(3, i, "White");
  }

  for (int i = 1; i < 6; i++) {
    ASD.pixel(5, i, "White");
  }
  ASD.pixel(6, 1, "White");
  ASD.pixel(6, 3, "White");
  ASD.pixel(6, 5, "White");

  for (int i = 1; i < 6; i++) {
    ASD.pixel(8, i, "White");
  }
  ASD.pixel(9, 5, "White");

  for (int i = 1; i < 6; i++) {
    ASD.pixel(11, i, "White");
  }
  ASD.pixel(12, 5, "White");

  for (int i = 2; i < 5; i++) {
    ASD.pixel(14, i, "White");
  }
  for (int i = 2; i < 5; i++) {
    ASD.pixel(17, i, "White");
  }
  ASD.pixel(15, 1, "White");
  ASD.pixel(16, 1, "White");
  ASD.pixel(15, 5, "White");
  ASD.pixel(16, 5, "White");
}

void world() {
  for (int i = 7; i < 11; i++) {
    ASD.pixel(1, i, "White");
  }
  for (int i = 7; i < 11; i++) {
    ASD.pixel(3, i, "White");
  }
  for (int i = 7; i < 11; i++) {
    ASD.pixel(5, i, "White");
  }
  ASD.pixel(2, 11, "White");
  ASD.pixel(4, 11, "White");

  for (int i = 8; i < 11; i++) {
    ASD.pixel(7, i, "White");
  }
  for (int i = 8; i < 11; i++) {
    ASD.pixel(10, i, "White");
  }
  ASD.pixel(8, 7, "White");
  ASD.pixel(9, 7, "White");
  ASD.pixel(8, 11, "White");
  ASD.pixel(9, 11, "White");

  for (int i = 7; i < 12; i++) {
    ASD.pixel(12, i, "White");
  }
  ASD.pixel(14, 7, "White");
  ASD.pixel(13, 7, "White");
  ASD.pixel(14, 9, "White");
  ASD.pixel(13, 9, "White");
  ASD.pixel(15, 8, "White");
  ASD.pixel(15, 10, "White");
  ASD.pixel(15, 11, "White");

  for (int i = 7; i < 12; i++) {
    ASD.pixel(17, i, "White");
  }
  ASD.pixel(18, 11, "White");

  for (int i = 7; i < 12; i++) {
    ASD.pixel(20, i, "White");
  }
  ASD.pixel(21, 7, "White");
  ASD.pixel(22, 7, "White");
  ASD.pixel(23, 8, "White");
  ASD.pixel(23, 9, "White");
  ASD.pixel(23, 10, "White");
  ASD.pixel(22, 11, "White");
  ASD.pixel(21, 11, "White");
}
