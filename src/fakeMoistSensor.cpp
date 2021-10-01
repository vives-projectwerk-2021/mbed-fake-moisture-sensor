#include <stdlib.h> 
#include "fakeMoistSensor.h"

int FakeMoistSensor::moisture() {
    // get random value
    return rand() % 100 + 1;
}