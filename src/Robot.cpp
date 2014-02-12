/*
 * Robot.cpp
 * ~~~~~~~~~
 * Central control of the robot
 */
#include <Arduino.h>
#include "Robot.h"

void setup()
{
    init_movement();
    init_output();
    init_sensors();
}

void loop()
{

}

