/**
 * Author: Bernardo Gallegos
 * Project: Clock Program
 * Date: 11/8/2023
 * Description: This program simulates a 12-hour and 24-hour clock allowing user interaction.
 */

// TwentyFourHourClock.h
#ifndef TWENTY_FOUR_HOUR_CLOCK_H
#define TWENTY_FOUR_HOUR_CLOCK_H

#include "Clock.h"

class TwentyFourHourClock : public Clock
{
public:
    TwentyFourHourClock(int hour, int minute, int second);
    virtual ~TwentyFourHourClock(); // Virtual destructor

    virtual void displayTime() const;

protected:
    virtual void updateDisplay();
};

#endif // TWENTY_FOUR_HOUR_CLOCK_H
