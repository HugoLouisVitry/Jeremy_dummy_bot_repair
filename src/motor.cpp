#include "motor.h"

Motor::Motor(){}
Motor::Motor(int pos_dir_pin,int neg_dir_pin, int enable_pin)
{
    _enable_pin = enable_pin ;
    _pos_dir_pin = pos_dir_pin;
    _neg_dir_pin = neg_dir_pin;

    pinMode(_enable_pin,OUTPUT);
    pinMode(_pos_dir_pin,OUTPUT);
    pinMode(_neg_dir_pin,OUTPUT); 
}

void Motor::command(float cmd_speed,bool dir)
{
    digitalWrite(_enable_pin,HIGH);
    if (dir) 
    {
        analogWrite(_pos_dir_pin,cmd_speed);
        digitalWrite(_neg_dir_pin,LOW);
    }
    else 
    {
        digitalWrite(_pos_dir_pin,LOW);
        analogWrite(_neg_dir_pin,cmd_speed);
    }
    if (!cmd_speed)
    {
        digitalWrite(_enable_pin,LOW);
    }
    
}