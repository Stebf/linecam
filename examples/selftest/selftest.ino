/*
 * Performs self-test for the linecam libary
 * created by Stebf, 2021
 * License: MIT
 */

#include "linecam.h"
#include "linecam_test.h"

void setup() {
    Serial.setup(11500);

    if(testVersion()){
        Serial.println("Information version is correct");
    }else{
        Serial.println("Information version failed")
    }

}

void loop() {}