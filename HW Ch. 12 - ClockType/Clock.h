#pragma once
#ifndef CLOCK_H
#define CLOCK_H

#include <iostream>
using namespace std;

class Clock
{
public:
    void setTime(int, int, int);
    void getTime(int&, int&, int&) const;
    void printTime() const;
    void incrementSeconds(int);
    void incrementMinutes(int);
    void incrementHours(int);
    bool equalTime(const Clock&) const;
    Clock();
    Clock(int, int, int);
private:
    int hr;
    int min;
    int sec;
};

#endif // !CLOCK_H
