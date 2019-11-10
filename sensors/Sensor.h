#ifndef _SENSOR_H_
#define _SENSOR_H_

namespace pifly
{
    struct Vector3 {
        float x;
        float y;
        float z;
    };

    template <class T>
    class Sensor {
        public:
            virtual T getValue() = 0;
    };

    class ScalarSensor : Sensor<float> { };
    class Vector3DSensor : Sensor<Vector3> { };
}

#endif