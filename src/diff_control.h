#ifndef DIFF_CONTROL_H
#define DIFF_CONTROL_H
#include "config.h"
#include "motor.h"

class Controll
{
    public:
        Controll(Motor mot_A, Motor mot_B);
        void move(float cmd_move_speed);
        void rotate(float cmd_rot_speed);
        void stop();
    
    private:
        float _pwm_rot_value;
        float _pwm_move_value;
        int _mot_A_pin;
        int _mot_B_pin;

};

#endif



