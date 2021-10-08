#pragma once

#include "stdint.h"

class FakeMoistSensor {
    public:
        FakeMoistSensor();
        uint16_t moisture();
};
