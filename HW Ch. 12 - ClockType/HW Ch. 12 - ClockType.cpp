

#include <iostream>
using namespace std;

#include "Clock.h"
#include "ZonedClock.h"


int main()
{
    ZonedClock clock1;
    clock1.clockName = "Clock1";
    ZonedClock clock2;
    clock2.clockName = "Clock2";

    int hours;
    int minutes;
    int seconds;
   
    cout << "What time does Clock1 have? ";
    cin >> hours >> minutes >> seconds; //Line 17
    cout << endl; //Line 18
    clock1.setTime(hours, minutes, seconds); //Line 19
    clock1.setZone();
    cout << endl; 

    cout << "What time does Clock2 have? ";
    cin >> hours >> minutes >> seconds; //Line 17
    cout << endl; 
    clock2.setTime(hours, minutes, seconds); //Line 19
    clock2.setZone();
    cout << endl; 

    clock1.compareZones(clock2);
    clock2.compareZones(clock1);

    return 0;
}//end main




