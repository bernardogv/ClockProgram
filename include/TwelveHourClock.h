/**
 * Author: Bernardo Gallegos
 * Project: Clock Program
 * Date: 11/8/2023
 * Description: This program simulates a 12-hour and 24-hour clock allowing user interaction.
 */

#ifndef TWELVE_HOUR_CLOCK_H
#define TWELVE_HOUR_CLOCK_H

#include "Clock.h"

class TwelveHourClock : public Clock
{
public:
    TwelveHourClock(int hour, int minute, int second); // Constructor
    virtual ~TwelveHourClock();                        // Destructor

    virtual void displayTime() const;

protected:
    virtual void updateDisplay();
    bool isAM; // Flag to indicate if the time is AM or PM
};

#endif // TWELVE_HOUR_CLOCK_H
