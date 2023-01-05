#include "motor.h"

Motor::Motor(){}
Motor::Motor(int pos_dir_pin,int neg_dir_pin)
{
    _pos_dir_pin = pos_dir_pin;
    _neg_dir_pin = neg_dir_pin;

    pinMode(_pos_dir_pin,OUTPUT);
    pinMode(_neg_dir_pin,OUTPUT); 
}

void Motor::command(float cmd_speed,bool dir)
{
    if (dir) 
    {
        digitalWrite(_pos_dir_pin,HIGH);
        digitalWrite(_neg_dir_pin,LOW);
    }
    else 
    {
        digitalWrite(_pos_dir_pin,LOW);
        digitalWrite(_neg_dir_pin,HIGH);
    }
    if (!cmd_speed)
    {
        digitalWrite(_pos_dir_pin,LOW);
        digitalWrite(_neg_dir_pin,LOW);  
    }
    
}