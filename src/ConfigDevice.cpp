#include <ConfigDevice.h>

void configDevice() {
  uint64_t chipid = ESP.getEfuseMac(); 
  char idStr[17];
  sprintf(idStr, "%016llX", chipid); 
  while (!String(idStr).equals(MQTT_CLIENT_ID)) delay(1000);
}