#include "Arduino.h"
#include "ArduinoSerialDisplay.h"

String ASD::stringToColor(String in) {
  in.toLowerCase();
  if (in == "darkred" || in == "4" || in == "dr") {
    return "4";
  } else if (in == "red" || in == "c" || in == "r") {
    return "c";
  } else if (in == "gold" || in == "6" || in == "g") {
    return "6";
  } else if (in == "yellow" || in == "e" || in == "y") {
    return "e";
  } else if (in == "darkgreen" || in == "2" || in == "dg") {
    return "2";
  } else if (in == "green" || in == "a" || in == "g") {
    return "a";
  } else if (in == "aqua" || in == "b" || in == "aq") {
    return "b";
  } else if (in == "darkaqua" || in == "3" || in == "da") {
    return "3";
  } else if (in == "darkblue" || in == "1" || in == "db") {
    return "1";
  } else if (in == "blue" || in == "9" || in == "b") {
    return "9";
  } else if (in == "lightpurple" || in == "d" || in == "lp") {
    return "d";
  } else if (in == "darkpurple" || in == "5" || in == "dp") {
    return "5";
  } else if (in == "white" || in == "f" || in == "w") {
    return "f";
  } else if (in == "gray" || in == "7" || in == "gr") {
    return "7";
  } else if (in == "darkgray" || in == "8" || in == "dg") {
    return "8";
  } else if (in == "black" || in == "0" || in == "bl") {
    return "0";
  }
}

/*
 * Serial.println("x y color"); 60*60 https://pointsprizes-blog.s3-accelerate.amazonaws.com/4497.jpg
 * Serial.println("b color"); b - background
 * Serial.println("s x y width height color"); s - sqwere
 */

ASD::ASD(int baud) {
  //Serial.begin(baud); //1000000
}

void ASD::pixel(int x, int y, String color) {
  String _color = stringToColor(color);
  Serial.println(String(x) + " " + String(y) + " " + String(_color));
  delay(10);
}

void ASD::background(String color) {
  String _color = stringToColor(color);
  Serial.println("b " + String(_color));
  delay(10);
}

void ASD::square(int x, int y, int w, int h, String color) {
  String _color = stringToColor(color);
  Serial.println("s " + String(x) + " " +  String(y) + " " +  String(w) + " " +  String(h) + " " +  String(_color));
  delay(10);
}
