
#include <Arduino.h>
#include "motor.h"
#include "diff_control.h"

int motorA_PWM      = 3 ;
int motorB_PWM      = 9 ;
int motorA_dir_pos  = 11;
int motorB_dir_pos  = 5 ;
int motorA_dir_neg  = 10;
int motorB_dir_neg  = 6 ;

Motor motor_A(motorA_PWM,motorA_dir_pos,motorA_dir_neg);
Motor motor_B(motorB_PWM,motorB_dir_pos,motorB_dir_neg);

Controll controller(motor_A,motor_B);

void setup()
{
    Serial.begin(9600);

}

void loop()
{
    char cmd = Serial.read();
    Serial.write(cmd);
    if(-1!=cmd)
    {
        if('F' == cmd ){controller.move(NOMINAL_MOVE_SPEED);}
        else if('B' == cmd ){controller.move(-NOMINAL_MOVE_SPEED);}
        else if('L' == cmd ){controller.rotate(NOMINAL_ROTATION_SPEED);}
        else if('R' == cmd ){controller.rotate(-NOMINAL_ROTATION_SPEED);}
        else if('S' == cmd ){controller.stop();}

    }
    else {controller.stop();}
}


