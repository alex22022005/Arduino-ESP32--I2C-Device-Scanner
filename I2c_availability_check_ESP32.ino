#include <Wire.h>

void setup() {
    Wire.begin(21, 22); 
    Serial.begin(115200);
    Serial.println("\nI2C Scanner");

    for (byte address = 1; address < 127; address++) {
        Wire.beginTransmission(address);
        if (Wire.endTransmission() == 0) {
            Serial.print("I2C device found at address 0x");
            Serial.println(address, HEX);
            delay(500);
        }
    }
}

void loop() {}
