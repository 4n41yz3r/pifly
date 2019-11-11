#ifndef _MARG_H_
#define _MARG_H_

#include "sensor.h"

namespace pifly
{
    class Marg {
        public:
            virtual void initialize() = 0;
            virtual void update() = 0;
            virtual Vector3 getAccel() = 0;
            virtual Vector3 getGyro() = 0;
            virtual Vector3 getCompass() = 0;
    };
}

#endif