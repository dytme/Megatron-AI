/*
A definition of necessary global parameters (as little as possible) and parameters
(#define, for example the pin names)

ENA - Takes the PWM of the left motor. Set it to 0 to disable or change the duty cycle to change speed.
ENB - Same, for right motor

IN1 - Right Forwards
IN2 - Right Backwards
IN3 - Left Forwards
IN4 - Left Backwards
IN3 + IN4 - 

To BRAKE, enable all 4 pins.
*/

// Dependencies

#include <Arduino.h>


// Pins

const int ENL_PIN = 14; // ENA_A
const int ENR_PIN = 15; // ENA_B
const int IN1_PIN = 2; // Right Forward
const int IN2_PIN = 3; // Right Backward
const int IN3_PIN = 4; // Left Forward
const int IN4_PIN = 5; // Left Backward
const int LSL_PIN = A0; //left light sensor
const int LSR_PIN = A1; //right light sensor



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

    digitalWrite(ENL_PIN, HIGH);
    digitalWrite(ENR_PIN, HIGH);
}

void InitSerial() {
    Serial.begin(115200);
}

void InitSensors() {
    pinMode(LSL_PIN, INPUT);
    pinMode(LSR_PIN, INPUT);
}

void setup() {
    InitMotors();
    InitSerial();

    pinMode(LED_BUILTIN, OUTPUT);
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
        digitalWrite(IN3_PIN, HIGH);
        digitalWrite(IN4_PIN, HIGH);
        return;
    }

    if (PWM_val > 0) {
        digitalWrite(IN3_PIN, HIGH);
        digitalWrite(IN4_PIN, LOW);
    } else {
        digitalWrite(IN3_PIN, LOW);
        digitalWrite(IN4_PIN, HIGH);
    }

    analogWrite(ENL_PIN, abs(PWM_val));    

}

void SetRightMotor(int PWM_val, bool BRAKE) {

    // Overwrite the behaviour to force the engine to brake.
    if (BRAKE) {
        // digitalWrite(ENL_PIN, LOW);
        digitalWrite(IN1_PIN, HIGH);
        digitalWrite(IN2_PIN, HIGH);
        return;
    }

    if (PWM_val > 0) {
        digitalWrite(IN1_PIN, HIGH);
        digitalWrite(IN2_PIN, LOW);
    } else {
        digitalWrite(IN1_PIN, LOW);
        digitalWrite(IN2_PIN, HIGH);
    }

    analogWrite(ENR_PIN, abs(PWM_val));    

}

// bool led = false;
// void blinkyStatus() {

//     long time = millis();
//     if (time/10.0 % 100 = 0) {
//         led = !led;
//     }

// }

const int sampleCount = 10;
int lastLSamples[sampleCount];
int lastRSamples[sampleCount];


int averageLSensor = 0;
int averageRSensor = 0;

void updateSensorData() {

    // Read sensor data
    int leftSensorReading = analogRead(LSL_PIN);
    int rightSensorReading = analogRead(LSR_PIN);

    leftSensorReading = map(leftSensorReading, 1023, 400, 0, 220);
    rightSensorReading = map(rightSensorReading - 250, 1023, 400, 0, 220);

    leftSensorReading = constrain(leftSensorReading, 0, 255);
    rightSensorReading = constrain(rightSensorReading, 0, 255);


    // Update sample base
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

// 0 = left, 1 = straight, 2 = right

bool fallbackBehaviour = false;
int fallbackDirection = 1;
const int fallbackDirectionThreshold = 100;
const int fallbackLightThreshold = 50;


void computeFallbackDirection() {

    if (fallbackBehaviour) return;

    int tendency = averageRSensor - averageLSensor;
    if (tendency > fallbackDirectionThreshold) fallbackDirection = 2;
    else if (tendency < -fallbackDirectionThreshold) fallbackDirection = 0;
    else fallbackDirection = 1;
}

void loop() {

    updateSensorData();

    fallbackBehaviour = (averageLSensor+averageRSensor)/2.0 < fallbackLightThreshold;

    if (fallbackBehaviour) {
        switch(fallbackDirection) {
            case 0:
                SetLeftMotor(0, false);
                SetRightMotor(200, false);
                break;
            case 2:
                SetLeftMotor(200, false);
                SetRightMotor(0, false);
                break;
            default:
                SetLeftMotor(200, false);
                SetRightMotor(200, false);
                break;
        }
    } else {
        // Engage motors based on the average of multiple samples
        SetLeftMotor(averageLSensor, false);
        SetRightMotor(averageRSensor, false);

        // Only compute fallback mode if actively following the line
        // TODO: Add a 250ms delay between re-computations.
        computeFallbackDirection();
    }

    // Print to serial (debug)
    static unsigned long looptime;
    if (millis() > looptime+19) {
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
        Serial.print(fallbackDirection);
        Serial.print("  Fallback Enabled: ");
        Serial.print(fallbackBehaviour);
        Serial.print("\n");
    }

}