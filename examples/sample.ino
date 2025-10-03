#include <Arduino.h>
#if defined(DEVICE_ID)
uint64_t chipid = ESP.getEfuseMac(); 
char idStr[17]; 
void configDevice() {
    sprintf(idStr, "%016llX", chipid); 
    while (!String(idStr).equals(DEVICE_ID));
}
#endif