/**
 * Author: Bernardo Gallegos
 * Project: Clock Program
 * Date: 11/8/2023
 * Description: This program simulates a 12-hour and 24-hour clock allowing user interaction.
 */

// TwelveHourClock.cpp
#include "../include/TwelveHourClock.h"
#include <iostream>

TwelveHourClock::TwelveHourClock(int hour, int minute, int second)
    : Clock(hour % 12 == 0 ? 12 : hour % 12, minute, second), isAM(hour < 12) {}

TwelveHourClock::~TwelveHourClock()
{
    // Destructor code if necessary
}

void TwelveHourClock::displayTime() const
{
    // Display the time in a 12-hour format with AM/PM
    std::cout << formatTwoDigits(hours == 12 ? 12 : hours % 12) << ":"
              << formatTwoDigits(minutes) << ":"
              << formatTwoDigits(seconds) << (isAM ? " AM" : " PM") << std::endl;
}

void TwelveHourClock::updateDisplay()
{
    // If it's just past 11:59:59 AM, switch to PM, and vice versa
    if (hours == 12)
    {
        isAM = !isAM; // Toggle AM/PM
    }
    // If it's midnight or noon, reset to 12, otherwise take modulo 12 of hours
    hours = hours % 12 == 0 ? 12 : hours % 12;
}
