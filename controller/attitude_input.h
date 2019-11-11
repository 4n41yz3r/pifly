#ifndef _ATTITUDE_INPUT_H_
#define _ATTITUDE_INPUT_H_

namespace pifly
{
    class AttitudeInput
    {
        virtual int getPitch() = 0;
        virtual int getRoll() = 0;
    };
}

#endif