#ifndef SENSORSYSTEM_SENSOR_CORE_TSLSENSOR
#define SENSORSYSTEM_SENSOR_CORE_TSLSENSOR

#include <Adafruit_TSL2561_U.h>
#include <Adafruit_Sensor.h>

#include "lightsensor.h"

namespace sensorsystem
{

class TSLSensor : public LightSensor
{
    public:
    static const uint8_t base_address = 0x39;

    TSLSensor(uint8_t address=base_address);
    float getLux();
    bool begin();

    private:
    Adafruit_TSL2561_Unified sensor;
};

}

#endif