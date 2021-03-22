/*!
 * @file linecam.h
 * 
 * An Arduino libary for using cameras to control a robot
 * https://github.com/Stebf/linecam
 * Licensed under MIT, see LICENSE for more details
 * Stebf, 2021
 */

#ifndef STEBF_LINECAM_H
#define STEBF_LINECAM_H

//#include <Arduino.h>
/*!
 * @brief Main Linecam class
 */
class Linecam {
public:
   void linecam(void);
   char* information(void);
   char* information(int variant);
   char* information(char variantChar);
private:

protected:
    char* version = "0.0.1";
};



#endif