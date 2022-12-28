#ifndef CONFIG_HEADER
#define CONFIG_HEADER

#include <Arduino.h>

int motorA_PWM ;
int motorB_PWM ;
int motorA_dir_pos ;
int motorB_dir_pos ;
int motorA_dir_neg ;
int motorB_dir_neg ;

int ZERO_SPEED = 0;
int NOMINAL_MOVE_SPEED = 100 ; // PWM 
int NOMINAL_ROTATION_SPEED = 30; // PWM 


# endif