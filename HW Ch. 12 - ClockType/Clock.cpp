#include "Clock.h"

void Clock::setTime(int hours, int minutes, int seconds)
{
    if (0 <= hours && hours < 24)
        hr = hours;
    else
        hr = 0;
    if (0 <= minutes && minutes < 60)
        min = minutes;
    else
        min = 0;

    if (0 <= seconds && seconds < 60)
        sec = seconds;
    else
        sec = 0;
}

void Clock::getTime(int& hours, int& minutes,
    int& seconds) const

{
    hours = hr;
    minutes = min;
    seconds = sec;
}

void Clock::printTime() const
{
    if (hr < 10)
        cout << "0";
    cout << hr << ":";
    if (min < 10)
        cout << "0";
    cout << min << ":";
    if (sec < 10)
        cout << "0";
    cout << sec;
}

void Clock::incrementHours(int amnt=1)
{
    hr+=amnt;
    if (hr > 23)
        hr -= 24;
}

void Clock::incrementMinutes(int amnt=1)
{
    min+=amnt;
    if (min > 59)
    {
        min -=60;
        incrementHours(); //increment hours
    }
}

void Clock::incrementSeconds(int amnt=1)
{
    sec+=amnt;
    if (sec > 59)
    {
        sec -= 60;
        incrementMinutes(); //increment minutes
    }
}

bool Clock::equalTime(const Clock& otherClock) const
{
    return (hr == otherClock.hr
        && min == otherClock.min
        && sec == otherClock.sec);

}

Clock::Clock() {
    hr = 0;
    min = 0;
    sec = 0;
}
Clock::Clock(int h, int m, int s) {
    setTime(h, m, s);
}