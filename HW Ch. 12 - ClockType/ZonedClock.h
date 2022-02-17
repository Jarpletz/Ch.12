#pragma once
#ifndef ZONEDCLOCK_H
#define ZONEDCLOCK_H


#include "Clock.h"
#include <cstdlib>
#include <string>

class ZonedClock :
    public Clock
{
public:
    string clockName;

    void setZone();//Requests and sets user 

    void printZone() const;

    void compareZones(ZonedClock) const;

    ZonedClock();//Default constructor. Defaults to EST.
    ZonedClock(int, int, int, int);

private:
    int zoneIndex; //The time zone of the clock (American Only).
              //0=EST, 1=CST, 2= MST, 3=PST, 4=AST, 5=HST. 
    string zoneName;
};

#endif //ZONEDCLOCK