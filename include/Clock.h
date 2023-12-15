// Clock.h
/**
 * Author: Bernardo Gallegos
 * Project: Clock Program
 * Date: 11/8/2023
 * Description: This program simulates a 12-hour and 24-hour clock allowing user interaction.
 */
#ifndef CLOCK_H
#define CLOCK_H
#include <string>
#include <sstream>
#include <iomanip>

class Clock
{
public:
    Clock(int hour, int minute, int second); // Constructor with initial time
    virtual ~Clock();                        // Virtual destructor for proper cleanup in derived classes

    void addOneHour();
    void addOneMinute();
    void addOneSecond();

    virtual void displayTime() const = 0; // Pure virtual function for displaying time

protected:
    int hours;
    int minutes;
    int seconds;
    virtual void updateDisplay() = 0; // Pure virtual function to update the time display

    static std::string formatTwoDigits(int number); // Formats a number to two digits

private:
    bool isValidTime(int hour, int minute, int second) const; // Validates the time
};

#endif // CLOCK_H
