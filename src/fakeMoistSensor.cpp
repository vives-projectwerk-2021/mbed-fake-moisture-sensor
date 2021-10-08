#include "mbed.h"
#include "fakeMoistSensor.h"

FakeMoistSensor::FakeMoistSensor()
{
    srand(time(NULL));
}

int FakeMoistSensor::moisture() {
    // get random value
    return rand() % 100 + 1;
}