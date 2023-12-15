/**
 * Author: Bernardo Gallegos
 * Project: Clock Program
 * Date: 11/8/2023
 * Description: This program simulates a 12-hour and 24-hour clock allowing user interaction.
 */

// TwentyFourHourClock.cpp
#include "../include/TwentyFourHourClock.h"
#include <iostream>

TwentyFourHourClock::TwentyFourHourClock(int hour, int minute, int second)
    : Clock(hour, minute, second) {}

TwentyFourHourClock::~TwentyFourHourClock()
{
}

void TwentyFourHourClock::displayTime() const
{
    std::cout << formatTwoDigits(hours) << ":"
              << formatTwoDigits(minutes) << ":"
              << formatTwoDigits(seconds) << std::endl;
}

void TwentyFourHourClock::updateDisplay()
{
}