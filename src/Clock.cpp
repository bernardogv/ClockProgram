/**
 * Author: Bernardo Gallegos
 * Project: Clock Program
 * Date: 11/8/2023
 * Description: This program simulates a 12-hour and 24-hour clock allowing user interaction.
 */
// Clock.cpp
#include "../include/Clock.h"

// Constructor implementation
Clock::Clock(int hour, int minute, int second)
{
    if (isValidTime(hour, minute, second))
    {
        hours = hour;
        minutes = minute;
        seconds = second;
    }
    else
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
}

// Virtual destructor implementation
Clock::~Clock()
{
}

// Function to add one hour to the time
void Clock::addOneHour()
{
    hours++;
    if (hours > 23)
    {
        hours = 0;
    }
    updateDisplay();
}

// Function to add one minute to the time
void Clock::addOneMinute()
{
    minutes++;
    if (minutes > 59)
    {
        minutes = 0;
        addOneHour();
    }
    updateDisplay();
}

// Function to add one second to the time
void Clock::addOneSecond()
{
    seconds++;
    if (seconds > 59)
    {
        seconds = 0;
        addOneMinute();
    }
    updateDisplay();
}

// Private function to validate the time
bool Clock::isValidTime(int hour, int minute, int second) const
{
    if (hour < 0 || hour > 23)
    {
        return false;
    }
    if (minute < 0 || minute > 59)
    {
        return false;
    }
    if (second < 0 || second > 59)
    {
        return false;
    }
    return true;
}

// Utility function to format a number to two digits
std::string Clock::formatTwoDigits(int number)
{
    std::ostringstream output;
    output << std::setw(2) << std::setfill('0') << number;
    return output.str();
}
