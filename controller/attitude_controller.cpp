#include "attitude_controller.h"

namespace pifly
{
    AttitudeController::AttitudeController(
        Ahrs *ahrs,
        AttitudeInput *input,
        AttitudeOutput *output)
    {
        _ahrs = ahrs;
        _input = input;
        _output = output;
    }

    void AttitudeController::update() { }
}