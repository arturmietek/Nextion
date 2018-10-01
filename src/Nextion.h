
#ifndef __NEXTION_H__
#define __NEXTION_H__

#include <Arduino.h>

#define NextionSerial Serial

class Nextion {

  private:
    void sendCommand(const char* cmd);

  public:
    void setComponentText(String component, String txt);
    void setBackLightPercent(int percent);
    void setVisiblity(String component, int visible);
};

#endif