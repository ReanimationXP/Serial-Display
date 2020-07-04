#include "Arduino.h"
#ifndef ArduinoSerialDisplay_h
#define ArduinoSerialDisplay_h

class ASD {
  public:
    ASD(int baud);
    void pixel(int x, int y, String color);
    void background(String color);
    void square(int x, int y, int w, int h, String color);
  private:
    String stringToColor(String in);
};

#endif
