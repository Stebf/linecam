/*!
 * @file linecam_test.h
 * Selftests for the linecam libary
 * created by Stebf 2021, License: MIT
 */
#ifndef STEBF_LINECAM_TEST_H
#define STEBF_LINECAM_TEST_H

#include "linecam.h"

Linecam lc;

// TODO: Create tests (if it's even a good idea)

bool testVersion(void) {
    extern char* version;
    if (lc.information(1) == version) {
        return true;
    } else if (lc.information('v') == version) {
        return true;
    } else {
        return false;
    }
}

#endif