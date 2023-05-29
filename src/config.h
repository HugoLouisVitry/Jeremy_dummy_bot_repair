#ifndef CONFIG_HEADER
#define CONFIG_HEADER
#include <Arduino.h>
#include <../lib/metro.h>
#include <Servo.h>
//vérifier après tests
//motor A : ENA(pwm),IN4(+),IN3(-)
//motor B : ENB(pwm),IN1(+),IN2(-)

#define ECHOPIN 12
#define TRIGPIN 13
#define MAX_RANGE 200
#define MIN_RANGE 0

#define SERVO_PIN 9

#define ZERO_SPEED 0

#define FWD 1
#define TRIGO 1

# endif