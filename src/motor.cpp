#include "motor.h"


Motor::Motor(int pwm_pin,int pos_dir_pin,int neg_dir_pin)
{
    _pwm_pin = pwm_pin;
    pos_dir_pin = pos_dir_pin;
    neg_dir_pin = neg_dir_pin;
    pinMode(pos_dir_pin,OUTPUT);
    pinMode(neg_dir_pin,OUTPUT); 
}

void Motor::command(float cmd_speed)
{
    analogWrite(_pwm_pin,cmd_speed);
}