#include "i2c_driver.h"
#include "relay_control.h"
#include "current_sensor.h"
#include <stdio.h>
#include <stdint.h>

#define CURRENT_THRESHOLD 5.0  // Amperes

void setup() {
    i2c_init();
    relay_init();
    sensor_init();
}

void loop() {
    float current = read_current_sensor();

    if (current > CURRENT_THRESHOLD) {
        relay_off();  // Disable load
    } else {
        relay_on();   // Enable load
    }

    delay_ms(1000);  // Sample every 1 second
}

int main() {
    setup();
    while (1) {
        loop();
    }
    return 0;
}
