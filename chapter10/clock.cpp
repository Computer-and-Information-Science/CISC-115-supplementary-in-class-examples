#include "clock.h"

int Clock::getNextUid() {
    return ++nextUid;
}


Clock::Clock() {
    hours = 0;
    minutes = 0;
    seconds = 0;
    uid = getNextUid();
}

int Clock::getUid() {
    return uid;
}


int Clock::nextUid = 0;