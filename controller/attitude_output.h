#ifndef _ATTITUDE_OUTPUT_H_
#define _ATTITUDE_OUTPUT_H_

namespace pifly
{
    class AttitudeOutput
    {
        virtual int setPitch() = 0;
        virtual int setRoll() = 0;
    };
}

#endif