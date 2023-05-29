
#include <Arduino.h>
#include "motor.h"
#include "diff_control.h"
#include "sound_finder.h"

int motorLeft_enable   = 7 ; // switch to no pwm pin when i have time to 
int motorLeft_dir_pos  = 10;
int motorLeft_dir_neg  = 11;

int motorRight_enable   = 8 ;
int motorRight_dir_pos  = 3 ;
int motorRight_dir_neg  = 6 ;
char cmd ;
float speed = 100 ;
float rot_spd = 120 ; 

Motor motor_Left(motorLeft_dir_pos,motorLeft_dir_neg,motorLeft_enable);
Motor motor_Right(motorRight_dir_pos,motorRight_dir_neg,motorRight_enable);

Controll controller(motor_Left,motor_Right);

Metro test_refresh(500);
sound_dist_sensor eyes(TRIGPIN,ECHOPIN,SERVO_PIN);

void setup()
{
    Serial.begin(9600);
    eyes.init();
}

void loop()
{
    

    cmd = Serial.read();
    if(-1!=cmd)
    {
        if (cmd =='T'){speed = 200;rot_spd=150;}
        if (cmd =='t'){speed = 100; rot_spd=120;}

        if(cmd == 'F' ){controller.move(speed,FWD);}
        else if('B' == cmd ){controller.move(speed,!FWD);}
        else if('L' == cmd ){controller.rotate(rot_spd,TRIGO);}
        else if('R' == cmd ){controller.rotate(rot_spd,!TRIGO);}
        else if('S' == cmd ){controller.stop();}
    }
    
}


