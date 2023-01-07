//vérifier après tests
//motor A : ENA(pwm),IN4(+),IN3(-)
//motor B : ENB(pwm),IN1(+),IN2(-)

#ifndef MOTOR_H
#define MOTOR_H

#include <Arduino.h>
#define ZERO_SPEED 0


class Motor 
{
    public:
        Motor();
        Motor(int pos_dir_pin,int neg_dir_pin, int enable_pin);
        void command(float cmd_speed,bool dir);
        int _pos_dir_pin ;
        int _neg_dir_pin ;
        int _enable_pin ;
};


#endif