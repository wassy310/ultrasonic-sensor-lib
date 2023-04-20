#ifndef ULTRASONIC_H
#define ULTRASONIC_H

#include "mbed.h"

class Ultrasonic {
public:
    Ultrasonic(PinName triggerPin, PinName echoPin, int timeout = 5000);

    double getDistance();

private:
    void flipRise();
    void flipFall();

    DigitalOut m_trigger;
    InterruptIn m_echo;
    Timer m_timer;

    int m_timeout;
    int m_capTime;
    int m_flag;

    double m_distance;
};

#endif
