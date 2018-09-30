#include "Nextion.h"

void Nextion::sendCommand(const char* cmd) {
  NextionSerial.print(cmd);
  NextionSerial.write(0xff);
  NextionSerial.write(0xff);
  NextionSerial.write(0xff);
}

void Nextion::setComponentText(String component, String txt) {
  String componentText = component + ".txt=\"" + txt + "\"";
  Nextion::sendCommand(componentText.c_str());
}

void Nextion::setBackLightPercent(int percent) {
	if (percent > 100) {
		percent = 100;
	}
	if (percent < 1) {
		percent = 1;
	}
	String command = "dim=" + String(percent);
  	Nextion::sendCommand(command.c_str());
}
 
