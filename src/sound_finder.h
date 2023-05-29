#ifndef SOUND_FINDER_H
#define SOUND_FINDER_H

#include "config.h"


class sound_dist_sensor
{

    public:
        sound_dist_sensor();
        sound_dist_sensor(int trig_pin,int echo_pin,int servo_pin);
        void init();
        float get_dist();
        void move_head(int angle);
    private:
        Servo _head;
        int _servo_pin;
        int _trig_pin;
        int _echo_pin;

};






#endif