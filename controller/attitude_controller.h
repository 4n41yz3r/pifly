#ifndef _ATTITUDE_CONTROLLER_H_
#define _ATTITUDE_CONTROLLER_H_

#include "sensors/sensors.h"
#include "attitude_input.h"
#include "attitude_output.h"

namespace pifly
{
    class AttitudeController
    {
        public:
            AttitudeController(
                Ahrs *ahrs, AttitudeInput *input, AttitudeOutput *output);
            void update();

        private:
            Ahrs *_ahrs;
            AttitudeInput *_input;
            AttitudeOutput *_output;
    };
}

#endif
