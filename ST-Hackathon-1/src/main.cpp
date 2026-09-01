/*
A definition of necessary global parameters (as little as possible) and parameters
(#define, for example the pin names)

ENA - Takes the PWM of the left motor. Set it to 0 to disable or change the duty cycle to change speed.
ENB - Same, for right motor

IN1 + IN2 - 
IN3 + IN4 - 

To BRAKE, enable all 4 pins.
*/

#include <Arduino.h>

// Pins

const int ENL_PIN = 0; // ENA_A
const int ENR_PIN = 1; // ENA_B
const int IN1_PIN = 2;
const int IN2_PIN = 3;
const int IN3_PIN = 4;
const int IN4_PIN = 5;
const int LSL_PIN = 26; //left light sensor
const int LSR_PIN = 27; //right light sensor

// 

const int brakeThreshold = -150;
const int minSensorReading = 0; // min = 0
const int maxSensorReading = 1023; // max = 1023



void setup() {

}

/*
A function: InitMotors(void) to be called in the setup() function to initialize the motors and
their interface.
*/

void InitMotors() {
    pinMode(ENL_PIN, OUTPUT);
    pinMode(ENR_PIN, OUTPUT);
    pinMode(IN1_PIN, OUTPUT);
    pinMode(IN2_PIN, OUTPUT);
    pinMode(IN3_PIN, OUTPUT);
    pinMode(IN4_PIN, OUTPUT);

    pinMode(LSL_PIN, INPUT);
    pinMode(LSR_PIN, INPUT);

    digitalWrite(ENL_PIN, HIGH);
    digitalWrite(ENR_PIN, HIGH);
}

void loop() {
    int leftSensorReading = analogRead(LSL_PIN);
    int rightSensorReading = analogRead(LSR_PIN);

    map(leftSensorReading, minSensorReading, maxSensorReading, -255, 255);
    map(rightSensorReading, minSensorReading, maxSensorReading, -255, 255);

    SetLeftMotor(rightSensorReading, rightSensorReading<brakeThreshold);
    SetRightMotor(leftSensorReading, leftSensorReading<brakeThreshold);
}

/*
A function: “SetMotor(int PWM_val, bool BRAKE)” that takes a PWM value (values
between - 255 and +255) and a BRAKE value, and controls the ENA, IN1, IN2 values of
the left motor. Also make a copy of this function for the right motor.
*/
void SetLeftMotor(int PWM_val, bool BRAKE) {

    // Overwrite the behaviour to force the engine to brake.
    if (BRAKE) {
        // digitalWrite(ENL_PIN, LOW);
        digitalWrite(IN1_PIN, HIGH);
        digitalWrite(IN2_PIN, HIGH);
        return;
    }

    if (PWM_val < 0) {
        digitalWrite(IN1_PIN, HIGH);
        digitalWrite(IN2_PIN, LOW);
    } else {
        digitalWrite(IN1_PIN, LOW);
        digitalWrite(IN2_PIN, HIGH);
    }

    analogWrite(ENL_PIN, abs(PWM_val));    

}

void SetRightMotor(int PWM_val, bool BRAKE) {

    // Overwrite the behaviour to force the engine to brake.
    if (BRAKE) {
        digitalWrite(ENR_PIN, LOW);
        return;
    }

}

