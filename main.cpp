#include "mbed.h"
#include "ultrasonic.h"

Ultrasonic sensor(D7, D8);

int main() {
    while(true) {
        double distance = sensor.getDistance();
        wait_ms(500);
    }
}
