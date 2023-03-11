#include "MotorControl.h"

MotorControl::MotorControl(int pinA, int pinB)
{
    _pinA = pinA;
    _pinB = pinB;
    _motorDirection = 0;
}

void MotorControl::clockwise()
{
    digitalWrite(_pinA, HIGH);
    digitalWrite(_pinB, LOW);
    Serial.println("[STATUS] - Motor turning clockwise");
}

void MotorControl::countClockwise()
{
    digitalWrite(_pinA, LOW);
    digitalWrite(_pinB, HIGH);
    Serial.println("[STATUS] - Motor turning counter clockwise");
}

void MotorControl::stop()
{
    digitalWrite(_pinA, LOW);
    digitalWrite(_pinB, LOW);
}

void MotorControl::determineMotorDirectionAndBegin()
{
    stop();

    if (_motorDirection)
    {
        clockwise();
    }
    else
    {
        countClockwise();
    }
}

int MotorControl::getMotorDirection()
{
    return _motorDirection;
}

void MotorControl::setMotorDirection(int direction)
{
    _motorDirection = direction;
}