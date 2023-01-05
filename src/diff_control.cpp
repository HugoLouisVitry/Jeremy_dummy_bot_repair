
#include "diff_control.h"


Controll::Controll(Motor mot_Left, Motor mot_Right)
{
    _Mot_Left = mot_Left;
    _Mot_Right = mot_Right;
}

void Controll::move(float cmd_move_speed,bool fwd) // les moteurs tournent dans le même sens
{
    
    _Mot_Left.command(cmd_move_speed, fwd);
    _Mot_Right.command(cmd_move_speed, fwd);

}

void Controll::rotate(float cmd_rot_speed,bool trigo) // les moteurs tournent en sens opposé
{
    _Mot_Left.command(cmd_rot_speed, !trigo);
    _Mot_Right.command(cmd_rot_speed, trigo);

}

void Controll::stop()
{
    _Mot_Left.command(ZERO_SPEED, 0);
    _Mot_Right.command(ZERO_SPEED, 0);
}
