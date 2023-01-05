
#include <Arduino.h>
#include "motor.h"
#include "diff_control.h"

int motorLeft_dir_pos  = 10;
int motorLeft_dir_neg  = 11;


int motorRight_dir_pos  = 8 ;
int motorRight_dir_neg  = 6 ;

Motor motor_Left(motorLeft_dir_pos,motorLeft_dir_neg);
Motor motor_Right(motorRight_dir_pos,motorRight_dir_neg);

Controll controller(motor_Left,motor_Right);

void setup()
{
    Serial.begin(9600);
    pinMode(3,OUTPUT);



}

void loop()
{
    char cmd = Serial.read();

    if(-1!=cmd)
    {
        
        //Serial.println(cmd);
        if(cmd == 'F' ){controller.move(1,FWD);}
        else if('B' == cmd ){controller.move(1,!FWD);}
        else if('L' == cmd ){controller.rotate(1,TRIGO);}
        else if('R' == cmd ){controller.rotate(1,!TRIGO);}
        else if('S' == cmd ){controller.stop();}

    }

    
}


