#ifndef CONFIG_HEADER
#define CONFIG_HEADER

#include <Arduino.h>

//vérifier après tests
//motor A : ENA(pwm),IN4(+),IN3(-)
//motor B : ENB(pwm),IN1(+),IN2(-)

int motorA_PWM      = 3;//3
int motorB_PWM      = 9;//9
int motorA_dir_pos  = 11;
int motorB_dir_pos  = 5;
int motorA_dir_neg  = 10;
int motorB_dir_neg  = 6;

int ZERO_SPEED = 0;
int NOMINAL_MOVE_SPEED = 100 ; // PWM 
int NOMINAL_ROTATION_SPEED = 30; // PWM 


# endif