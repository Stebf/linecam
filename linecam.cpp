/*!
 * @file linecam.cpp
 * MIT, Stebf 2021
 */

#include "linecam.h"

/*!
 * @brief Instantiates a new Linecam class
 */
void Linecam::linecam(void) {}


/*! 
 * @brief Gives information about the libary and connected devices
 * @param void
 * @param char variantChar
 * @param int variant
 * @return Returns information as char*
 */
char* Linecam::information(void) {
    information(0);
}
char* Linecam::information(char variantChar) {
    switch (variantChar)
    {
    case 'v':
        information(1);
        break;
    
    default:
        information(0);
        break;
    }
}
char* Linecam::information(int variant) {
    char* message = "";
    switch (variant)
    {
    case 1:
        //message = "Current libary version: " + version;
        break;
    
    default:
        break;
    }
    return message;
}