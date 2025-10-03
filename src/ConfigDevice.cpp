#include <ConfigDevice.h>

void configDevice() {
  uint64_t chipid = ESP.getEfuseMac(); 
  char idStr[17];
  sprintf(idStr, "%016llX", chipid); 
  #if defined(DEVICE_ID)
    while (!String(idStr).equals(DEVICE_ID)) delay(1000);
  #else
    while(1) delay(1000);
  #endif
}