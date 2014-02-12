/*
 * Output.h
 * ~~~~~~~~
 * Actually sends the output out to be read, as well as formatting it in a 
 * human-readable form.
 */

#include <Arduino.h>
#include "Output.h"

void init_output(void)
{
    Serial.begin(9600);

}


