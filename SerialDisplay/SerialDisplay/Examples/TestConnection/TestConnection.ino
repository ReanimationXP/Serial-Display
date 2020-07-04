#include <ArduinoSerialDisplay.h> // import library
/*
* PLEASE CHECK FOR UPDATES HERE: https://github.com/TilenS6/Serial-Display
*/
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
*   square(x, y, width, height, color); // NOTE: for now it only works with 60*60 pixel format. Check
*   pixel(x, y, color);
*/
ASD ASD(0); // make an object
void setup() {
 Serial.begin(1000000); //open serial because library need
}
void loop() {
 ASD.background("DarkBlue"); // background with dark blue color
 ASD.square(0, 0, 20, 20, "White"); // square in top left corner big 20 pixels with white color
 ASD.pixel(1, 1, "Aqua"); // pixel near top left corner with aqua color
 delay(5000); // slight delay
}