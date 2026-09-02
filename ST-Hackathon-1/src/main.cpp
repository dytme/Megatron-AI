/*

█████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████
█░░░░░░██████████░░░░░░█░░░░░░░░░░░░░░█░░░░░░░░░░░░░░█░░░░░░░░░░░░░░█░░░░░░░░░░░░░░█░░░░░░░░░░░░░░░░███░░░░░░░░░░░░░░█░░░░░░██████████░░░░░░█
█░░▄▀░░░░░░░░░░░░░░▄▀░░█░░▄▀▄▀▄▀▄▀▄▀░░█░░▄▀▄▀▄▀▄▀▄▀░░█░░▄▀▄▀▄▀▄▀▄▀░░█░░▄▀▄▀▄▀▄▀▄▀░░█░░▄▀▄▀▄▀▄▀▄▀▄▀░░███░░▄▀▄▀▄▀▄▀▄▀░░█░░▄▀░░░░░░░░░░██░░▄▀░░█
█░░▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀░░█░░▄▀░░░░░░░░░░█░░▄▀░░░░░░░░░░█░░▄▀░░░░░░▄▀░░█░░░░░░▄▀░░░░░░█░░▄▀░░░░░░░░▄▀░░███░░▄▀░░░░░░▄▀░░█░░▄▀▄▀▄▀▄▀▄▀░░██░░▄▀░░█
█░░▄▀░░░░░░▄▀░░░░░░▄▀░░█░░▄▀░░█████████░░▄▀░░█████████░░▄▀░░██░░▄▀░░█████░░▄▀░░█████░░▄▀░░████░░▄▀░░███░░▄▀░░██░░▄▀░░█░░▄▀░░░░░░▄▀░░██░░▄▀░░█
█░░▄▀░░██░░▄▀░░██░░▄▀░░█░░▄▀░░░░░░░░░░█░░▄▀░░█████████░░▄▀░░░░░░▄▀░░█████░░▄▀░░█████░░▄▀░░░░░░░░▄▀░░███░░▄▀░░██░░▄▀░░█░░▄▀░░██░░▄▀░░██░░▄▀░░█
█░░▄▀░░██░░▄▀░░██░░▄▀░░█░░▄▀▄▀▄▀▄▀▄▀░░█░░▄▀░░██░░░░░░█░░▄▀▄▀▄▀▄▀▄▀░░█████░░▄▀░░█████░░▄▀▄▀▄▀▄▀▄▀▄▀░░███░░▄▀░░██░░▄▀░░█░░▄▀░░██░░▄▀░░██░░▄▀░░█
█░░▄▀░░██░░░░░░██░░▄▀░░█░░▄▀░░░░░░░░░░█░░▄▀░░██░░▄▀░░█░░▄▀░░░░░░▄▀░░█████░░▄▀░░█████░░▄▀░░░░░░▄▀░░░░███░░▄▀░░██░░▄▀░░█░░▄▀░░██░░▄▀░░██░░▄▀░░█
█░░▄▀░░██████████░░▄▀░░█░░▄▀░░█████████░░▄▀░░██░░▄▀░░█░░▄▀░░██░░▄▀░░█████░░▄▀░░█████░░▄▀░░██░░▄▀░░█████░░▄▀░░██░░▄▀░░█░░▄▀░░██░░▄▀░░░░░░▄▀░░█
█░░▄▀░░██████████░░▄▀░░█░░▄▀░░░░░░░░░░█░░▄▀░░░░░░▄▀░░█░░▄▀░░██░░▄▀░░█████░░▄▀░░█████░░▄▀░░██░░▄▀░░░░░░█░░▄▀░░░░░░▄▀░░█░░▄▀░░██░░▄▀▄▀▄▀▄▀▄▀░░█
█░░▄▀░░██████████░░▄▀░░█░░▄▀▄▀▄▀▄▀▄▀░░█░░▄▀▄▀▄▀▄▀▄▀░░█░░▄▀░░██░░▄▀░░█████░░▄▀░░█████░░▄▀░░██░░▄▀▄▀▄▀░░█░░▄▀▄▀▄▀▄▀▄▀░░█░░▄▀░░██░░░░░░░░░░▄▀░░█
█░░░░░░██████████░░░░░░█░░░░░░░░░░░░░░█░░░░░░░░░░░░░░█░░░░░░██░░░░░░█████░░░░░░█████░░░░░░██░░░░░░░░░░█░░░░░░░░░░░░░░█░░░░░░██████████░░░░░░█
█████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████


▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄  ▀█▀ █▀▀ ▄▀█ █▀▄▀█   ▄▄▄   █░█ █▀█ ▀█▀ █▀▀ █░░  ▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄
▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄  ░█░ ██▄ █▀█ █░▀░█   ░░░   █▀█ █▄█ ░█░ ██▄ █▄▄  ▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄


Megatron is the latest development in line-following technology, utilizing state-of-the-art
    (For Hackathon 1) techniques to return to it's track upon loss of contact. Marvel at the
    breakthroughs <bla bla bla>


Authors:
* 
* 
* 
* 
*
*


Pin Behaviour:
    ENA - Takes the PWM of the left motor. Set it to 0 to disable or change the duty cycle to change speed.
    ENB - Same, for right motor
    IN1 - Right Forwards
    IN2 - Right Backwards
    IN3 - Left Forwards
    IN4 - Left Backwards
    LSL - Left Sensor (Analog Input)
    LSR - Right Sensor (Analog Input)

*/

// Dependencies

#include <Arduino.h>


// Pins

const int ENL_PIN = 15; // ENA_A
const int ENR_PIN = 14; // ENA_B
const int IN1_PIN = 2; // Right Forward
const int IN2_PIN = 3; // Right Backward
const int IN3_PIN = 4; // Left Forward
const int IN4_PIN = 5; // Left Backward
const int LSL_PIN = A0; //left light sensor
const int LSR_PIN = A1; //right light sensor

const int FBLS_PIN = 20; // FallBack Left Steering Indicator LED (mode 0)
const int FBSS_PIN = 19; // FallBack Straight Steering Indicator LED (mode 1)
const int FBRS_PIN = 18; // FallBack Right Steering Indicator LED (mode 2)
const int FBME_PIN = 21; // FallBack Enabled Indicator LED




// █▀ █▀▀ ▀█▀ █░█ █▀█
// ▄█ ██▄ ░█░ █▄█ █▀▀

// Set engine control pins to output and enable PWM signal for motors.
void InitMotors() {
    pinMode(ENL_PIN, OUTPUT);
    pinMode(ENR_PIN, OUTPUT);
    pinMode(IN1_PIN, OUTPUT);
    pinMode(IN2_PIN, OUTPUT);
    pinMode(IN3_PIN, OUTPUT);
    pinMode(IN4_PIN, OUTPUT);

    digitalWrite(ENL_PIN, HIGH);
    digitalWrite(ENR_PIN, HIGH);
}

// Serial, for debugging of sensor values
void InitSerial() {
    Serial.begin(115200);

    pinMode(FBLS_PIN, OUTPUT);
    pinMode(FBRS_PIN, OUTPUT);
    pinMode(FBSS_PIN, OUTPUT);
    pinMode(FBME_PIN, OUTPUT);
}

// Set sensor data pins to input
void InitSensors() {
    pinMode(LSL_PIN, INPUT);
    pinMode(LSR_PIN, INPUT);
}

void setup() {
    InitMotors();
    InitSerial();
    InitSensors();

    // Just to make sure we didn't fry the Pico or something lol
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, HIGH);
}




// █▀▄▀█ █▀█ ▀█▀ █▀█ █▀█   █▀▀ █▀█ █▄░█ ▀█▀ █▀█ █▀█ █░░
// █░▀░█ █▄█ ░█░ █▄█ █▀▄   █▄▄ █▄█ █░▀█ ░█░ █▀▄ █▄█ █▄▄

/*
    Allows you to steer the robot. Takes a PWM value (0-255) and applies the necessary settings to each motor.
    Provides functionality not used by the algorithm:
        Supports going in reverse (PWM values between -255 and 0)
        Supports forced braking
*/

void SetLeftMotor(int PWM_val, bool BRAKE) {

    // Overwrite the behaviour to force the engine to brake.
    if (BRAKE) {
        // digitalWrite(ENL_PIN, LOW);
        digitalWrite(IN1_PIN, HIGH);
        digitalWrite(IN2_PIN, HIGH);
        analogWrite(ENL_PIN, 255);
        return;
    }

    if (PWM_val >= 0) {
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
        // digitalWrite(ENL_PIN, LOW);
        digitalWrite(IN3_PIN, HIGH);
        digitalWrite(IN4_PIN, HIGH);
        analogWrite(ENR_PIN, 255);
        return;
    }

    if (PWM_val >= 0) {
        digitalWrite(IN3_PIN, HIGH);
        digitalWrite(IN4_PIN, LOW);
    } else {
        digitalWrite(IN3_PIN, LOW);
        digitalWrite(IN4_PIN, HIGH);
    }

    analogWrite(ENR_PIN, abs(PWM_val));    

}



// █▀ █▀▀ █▄░█ █▀ █▀█ █▀█   █▀▄ ▄▀█ ▀█▀ ▄▀█
// ▄█ ██▄ █░▀█ ▄█ █▄█ █▀▄   █▄▀ █▀█ ░█░ █▀█


// Last 10 readings for both sensors are stored in memory
const int sampleCount = 10;
int lastLSamples[sampleCount];
int lastRSamples[sampleCount];

// Latest average of each sensor's readings.
int averageLSensor = 0;
int averageRSensor = 0;

void updateSensorData() {


    // Read sensor data
    int leftSensorReading = analogRead(LSL_PIN);
    int rightSensorReading = analogRead(LSR_PIN);


    // Balance out the two sensors and translate from analog to PWM values
    leftSensorReading = map(leftSensorReading, 1023, 400, 0, 220);
    rightSensorReading = map(rightSensorReading - 100, 1023, 400, 0, 220);

    leftSensorReading = constrain(leftSensorReading, 0, 255);
    rightSensorReading = constrain(rightSensorReading, 0, 255);


    // Update sample base (shift all older readings further down the array(s))
    for ( int i = 0; i < sampleCount-2; i++ ) {
        lastLSamples[i+1] = lastLSamples[i];
        lastRSamples[i+1] = lastRSamples[i];
    }
    lastLSamples[0] = leftSensorReading;
    lastRSamples[0] = rightSensorReading;


    // Compute Average
    int totalL = 0;
    int totalR = 0;
    for ( int i = 0; i < sampleCount-1; i++ ) {
        totalL += lastLSamples[i];
        totalR += lastRSamples[i];
    }

    averageLSensor = totalL / sampleCount;
    averageRSensor = totalR / sampleCount;


}



// █▀▀ ▄▀█ █░░ █░░ █▄▄ ▄▀█ █▀▀ █▄▀   █▀▄▀█ █▀█ █▀▄ █▀▀
// █▀░ █▀█ █▄▄ █▄▄ █▄█ █▀█ █▄▄ █░█   █░▀░█ █▄█ █▄▀ ██▄

bool isInFallbackMode = false;  // whether it follows the line or continues to steer in the old direction
int fallbackSteer = 1;      // 0 = left, 1 = straight, 2 = right
const int fallbackModeThreshold = 3;        // how many times must the robot think the line is missing before it goes into fallback mode
const int fallbackDirectionThreshold = 60;  // difference between motor PWMs required to consider the robot as steering
const int fallbackLowLightThreshold = 75;   // minimum sensor reading (in PWM form) required to consider the robot as lost
                                            //      but won't it just stop? no: robot has momentum!! :3
const int fallbackHighLightThreshold = 220; // in case the robot only sees the line (so theres a bunch of branches everywhere)
                                            //      also fall back and (potentially force to) continue straight for a while


void computeFallbackDirection() {

    if (isInFallbackMode) return;

    digitalWrite(FBLS_PIN, LOW);
    digitalWrite(FBSS_PIN, LOW);
    digitalWrite(FBRS_PIN, LOW);

    int tendency = averageRSensor - averageLSensor; // which way does the robot already steer
    if (tendency > fallbackDirectionThreshold) {
        digitalWrite(FBRS_PIN, HIGH);
        fallbackSteer = 2;
    }
    else if (tendency < -fallbackDirectionThreshold) {
        digitalWrite(FBLS_PIN, HIGH);
        fallbackSteer = 0;
    }
    else { 
        digitalWrite(FBSS_PIN, HIGH);
        fallbackSteer = 1;
    }

}

void fallbackMovement() {

    switch(fallbackSteer) {
        case 0:
            SetLeftMotor(200, false);
            SetRightMotor(0, true);
            break;
        case 2:
            SetLeftMotor(0, true);
            SetRightMotor(200, false);
            break;
        default:
            SetLeftMotor(200, false);
            SetRightMotor(200, false);
            break;
    }
}



// █▀▄▀█ █▀█ █░█ █▀▀ █▀▄▀█ █▀▀ █▄░█ ▀█▀   █░░ █▀█ █▀█ █▀█
// █░▀░█ █▄█ ▀▄▀ ██▄ █░▀░█ ██▄ █░▀█ ░█░   █▄▄ █▄█ █▄█ █▀▀

void loop() {

    // Compute new average PWM values from the sensors
    updateSensorData(); 
    
    
    // Track how many times the robot considered itself lost (either in the dark or with too many lines)
    static int lostCount; 
    int averageReading = (averageLSensor+averageRSensor)/2.0;
    
    // If it's been lost for longer than the threshold, go in fallback mode.
    if (!isInFallbackMode) {
        if (averageReading < fallbackLowLightThreshold || averageReading > fallbackHighLightThreshold) lostCount++;
        else lostCount = 0;

        if (lostCount > fallbackModeThreshold) {
            isInFallbackMode = true;
            digitalWrite(FBME_PIN, HIGH);
            lostCount = 0;
        } else if (lostCount < 1) {
            computeFallbackDirection(); // Only try to determine the turning direction when the robot still sees (some) of the line
        }
    } else {
        if (averageReading > fallbackLowLightThreshold && averageReading < fallbackHighLightThreshold) lostCount++;
        else lostCount = 0;

        if (lostCount > fallbackModeThreshold) {
            isInFallbackMode = false;
            digitalWrite(FBME_PIN, LOW);
            lostCount = 0;
        }
    }

    SetLeftMotor(200, false);
    SetRightMotor(100, false);
    

    

    // Decide on movement mode (fallback vs normal)
    if (isInFallbackMode) {
        fallbackMovement();
    } else {
        // Engage motors based on the average of multiple samples
        SetLeftMotor(averageLSensor, false);
        SetRightMotor(averageRSensor, false);

        // Only compute fallback mode if actively following the line
        computeFallbackDirection();
    }


    // SetLeftMotor(averageLSensor, false);
    // SetRightMotor(averageRSensor, false);

    // Print to serial (debug)
    static unsigned long looptime;
    if (millis() > looptime+49) {
        looptime = millis();
        Serial.print("Left Sensor - Raw: ");
        Serial.print(analogRead(LSL_PIN));
        Serial.print("  PWM: ");
        Serial.print(averageLSensor);
        Serial.print("\n");
        Serial.print("Right Sensor - Raw: ");
        Serial.print(analogRead(LSR_PIN));
        Serial.print("  PWM: ");
        Serial.print(averageRSensor);
        Serial.print("\n");
        Serial.print("Fallback - Mode: ");
        Serial.print(fallbackSteer);
        Serial.print("  Fallback Enabled: ");
        Serial.print(isInFallbackMode);
        Serial.print("\n");
    }

}