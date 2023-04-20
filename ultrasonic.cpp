#include "ultrasonic.h"

Ultrasonic::Ultrasonic(PinName triggerPin, PinName echoPin, int timeout)
    : m_trigger(triggerPin), m_echo(echoPin), m_timeout(timeout), m_flag(0), m_capTime(0), m_distance(0.0)
{
    m_echo.rise(callback(this, &Ultrasonic::flipRise));
    m_echo.fall(callback(this, &Ultrasonic::flipFall));
}

double Ultrasonic::getDistance() {
    m_trigger = 1;
    wait_us(10);
    m_trigger = 0;

    ThisThread::sleep_for(60);

    m_distance = m_capTime * 0.034 / 2.0;
    if(m_distance > 400.0) {
        printf("distance: error!!!\r\n");
        return -1.0;
    } else {
        printf("distance: %3.2lfcm\r\n", m_distance);
        return m_distance;
    }
}

void Ultrasonic::flipRise() {
    m_timer.start();
    m_flag = 0;
}

void Ultrasonic::flipFall() {
    m_timer.stop();
    m_capTime = m_timer.read_us();
    m_timer.reset();
    m_flag = 1;
}
