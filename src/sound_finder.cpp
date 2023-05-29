#include "sound_finder.h"


sound_dist_sensor::sound_dist_sensor(){}

sound_dist_sensor::sound_dist_sensor(int trig_pin,int echo_pin,int servo_pin)
{
    this->_echo_pin = echo_pin;
    this->_trig_pin = trig_pin;
    this->_servo_pin =servo_pin;
    


};

void sound_dist_sensor::init()
{    
    pinMode(_trig_pin, OUTPUT);
    pinMode(_echo_pin, INPUT);
    this->_head.attach(_servo_pin);  
}

float sound_dist_sensor::get_dist()
{
    digitalWrite(_trig_pin,LOW);
    delayMicroseconds(2);
    digitalWrite(_trig_pin,HIGH);
    delayMicroseconds(10);
    digitalWrite(_trig_pin,LOW);
    float duration = pulseIn(_echo_pin,HIGH);


    float dist = duration/58.2;
    return dist;
};

void sound_dist_sensor::move_head(int angle)
{

    this->_head.writeMicroseconds(angle);

};



