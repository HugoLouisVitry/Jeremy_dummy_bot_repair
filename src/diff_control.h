#ifndef DIFF_CONTROL_H
#define DIFF_CONTROL_H

#include "config.h"
#include "motor.h"



class Controll
{
    public:
        Controll(Motor mot_Left, Motor motor_Right);
        void move(float cmd_move_speed,bool fwd); // dir = True for forward ! backward
        void rotate(float cmd_rot_speed,bool trigo); // // dir = True for  ! 
        void stop();
    
    private:
        Motor _Mot_Left;
        Motor _Mot_Right;
        


};

#endif



