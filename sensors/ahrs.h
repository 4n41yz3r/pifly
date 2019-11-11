#ifndef _AHRS_H_
#define _AHRS_H_

namespace pifly
{
    struct Quaternion
    {
        float w;
        float x;
        float y;
        float z;
    };
    
    struct Attitude
    {
        float yaw;
        float pitch;
        float roll;
    };    

    class Ahrs
    {
        public:
            virtual void initialize() = 0;
            virtual void update() = 0;
            virtual Quaternion getOrientation() = 0;
            virtual Attitude getAttitude() = 0;
    };
}

#endif