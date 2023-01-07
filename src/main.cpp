
#include <Arduino.h>
#include "motor.h"
#include "diff_control.h"

int motorLeft_enable   = 7 ; // switch to no pwm pin when i have time to 
int motorLeft_dir_pos  = 10;
int motorLeft_dir_neg  = 11;

int motorRight_enable   = 8 ;
int motorRight_dir_pos  = 3 ;
int motorRight_dir_neg  = 6 ;
char cmd ;

Motor motor_Left(motorLeft_dir_pos,motorLeft_dir_neg,motorLeft_enable);
Motor motor_Right(motorRight_dir_pos,motorRight_dir_neg,motorRight_enable);

Controll controller(motor_Left,motor_Right);

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    cmd = Serial.read();
    if(-1!=cmd)
    {
        if(cmd == 'F' ){controller.move(100,FWD);}
        else if('B' == cmd ){controller.move(100,!FWD);}
        else if('L' == cmd ){controller.rotate(50,TRIGO);}
        else if('R' == cmd ){controller.rotate(50,!TRIGO);}
        else if('S' == cmd ){controller.stop();}
    }
    
}


