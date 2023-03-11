#include "MotorControl.h"

/*
 * *************************************************************************************
 * ********************************* CONFIGURABLES *************************************
 * *************************************************************************************
 *
 * If you purchased the motor listed in the guide / Bill Of Materials, then this default value is correct!
 * 
 * directionalPinA = this is the pin that's wired to IN1 on your L298N circuit board
 * directionalPinB = this is the pin that's wired to IN2 on your L298N circuit board
 */
int directionalPinA = 10;   // GPIO 10
int directionalPinB = 11;   // GPIO 11

// direction can be:
//      "BOTH"
//      "CW"    <-- Clockwise
//      "CCW"   <-- Counter Clockwise
//
// -- If you want your winder to turn clockwise only, replace the direction value with "CW"
// -- If you want your winder to turn counter clockwise only, replace the direction value with "CCW"
// -- If you want your winder to turn both directions, replace the direction value with "BOTH"
struct RUNTIME_VARS
{
	String direction = "BOTH";
  bool routineRunning = false;
};
/*
 * *************************************************************************************
 * ******************************* END CONFIGURABLES ***********************************
 * *************************************************************************************
 */

/*
 * DO NOT CHANGE THESE VARIABLES!
 */
int currentSeconds = 0;
RUNTIME_VARS userDefinedSettings;
MotorControl motor(directionalPinA, directionalPinB);

/**
 * Sets running conditions to TRUE & calculates winding time parameters
 */
void beginWindingRoutine()
{
	userDefinedSettings.routineRunning = true;

  if ((strcmp(userDefinedSettings.direction.c_str(), "CW") == 0)) 
  {
    motor.setMotorDirection(1);
  }

	Serial.println("[STATUS] - Begin winding routine");
}

void setup()
{
  Serial.begin(9600);
  delay(5000);

	// Prepare pins
	pinMode(directionalPinA, OUTPUT);
	pinMode(directionalPinB, OUTPUT);

  beginWindingRoutine();
  motor.determineMotorDirectionAndBegin();
}

void loop()
{
  if ((strcmp(userDefinedSettings.direction.c_str(), "BOTH") == 0) && currentSeconds >= 180)
  {
    currentSeconds = 0;
    motor.stop();
    delay(3000);

    int currentDirection = motor.getMotorDirection();
    motor.setMotorDirection(!currentDirection);
    Serial.println("[STATUS] - Motor Pause - mode is BOTH");
  
    motor.determineMotorDirectionAndBegin();
  } 
  else if (currentSeconds >= 180) 
  {
    currentSeconds = 0;
    Serial.println("[STATUS] - Motor Pause");
    motor.stop();
    delay(3000);

    motor.determineMotorDirectionAndBegin();
  }

	delay(1000);
  currentSeconds++;
}
