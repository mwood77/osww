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
 * externalButton = OPTIONAL - If you want to use an external momentary button to pause operation, connect it to this pin along with a resistor to ground. If you need to use another pin, change the value here.
 */
int directionalPinA = 10;   // GPIO 10
int directionalPinB = 11;   // GPIO 11
int externalButton = 14;    // GPIO 14

// direction can be:
//      "BOTH"
//      "CW"    <-- Clockwise
//      "CCW"   <-- Counter Clockwise
//
// -- If you want your winder to turn clockwise only, replace the direction value with "CW"
// -- If you want your winder to turn counter clockwise only, replace the direction value with "CCW"
// -- If you want your winder to turn both directions, replace the direction value with "BOTH"
//
// timeToRotateInSeconds = this is how long the motor will rotate for without stopping. Default is 180 seconds (3 minutes)
// timeToPauseInSeconds = this is how long the pause duration will be during motor operation. Default is 3 seconds
struct RUNTIME_VARS
{
  String direction = "BOTH";
  bool routineRunning = false;
  int timeToRotateInSeconds = 180;
  int timeToPauseInSeconds = 3;
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
  pinMode(externalButton, INPUT);

  beginWindingRoutine();
  motor.determineMotorDirectionAndBegin();
}

void awaitWhileListening(int pauseInSeconds)
{
  // While waiting for the 1 second to pass, actively monitor/listen for button press.
  int delayEnd = to_msec_since_boot(get_absolute_time()) + (1000 * pauseInSeconds);
  while (to_msec_since_boot(get_absolute_time()) < delayEnd) {
    // get physical button state
    int buttonState = digitalRead(externalButton);

    if (buttonState == HIGH) {
      Serial.println("[STATUS] - Button pressed");
      userDefinedSettings.routineRunning = !userDefinedSettings.routineRunning;
    }
  }
}

void loop()
{
  if (userDefinedSettings.routineRunning)
  {
    if (currentSeconds >= userDefinedSettings.timeToRotateInSeconds)
    {
      currentSeconds = 0;
      motor.stop();
      awaitWhileListening(userDefinedSettings.timeToPauseInSeconds);
      if (strcmp(userDefinedSettings.direction.c_str(), "BOTH") == 0)
      {
        int currentDirection = motor.getMotorDirection();
        motor.setMotorDirection(!currentDirection);
        Serial.println("[STATUS] - Motor Pause - mode is BOTH");
      }
      motor.determineMotorDirectionAndBegin();
    }
  } else {
    motor.stop();
  }
  awaitWhileListening(1);
  currentSeconds++;
}
