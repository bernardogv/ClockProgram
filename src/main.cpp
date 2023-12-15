/**
 * Author: Bernardo Gallegos
 * Project: Clock Program
 * Date: 11/8/2023
 * Description: This program simulates a 12-hour and 24-hour clock allowing user interaction.
 */

#include "../include/TwelveHourClock.h"
#include "../include/TwentyFourHourClock.h"
#include "../include/Menu.h"
#include <iostream>

int main()
{
    // Initialize clock objects with some starting time, say 12:00:00
    TwelveHourClock twelveHourClock(12, 0, 0);
    TwentyFourHourClock twentyFourHourClock(12, 0, 0);

    bool exitProgram = false;
    while (!exitProgram)
    {
        // Clear the screen
        system("clear");
        std::cout << "Current Time:" << std::endl;
        std::cout << "12-Hour Clock: ";
        twelveHourClock.displayTime();
        std::cout << "24-Hour Clock: ";
        twentyFourHourClock.displayTime();
        std::cout << std::endl;

        displayMenu();
        int choice = getUserInput();

        switch (choice)
        {
        case 1:
            twelveHourClock.addOneHour();
            twentyFourHourClock.addOneHour();
            break;
        case 2:
            twelveHourClock.addOneMinute();
            twentyFourHourClock.addOneMinute();
            break;
        case 3:
            twelveHourClock.addOneSecond();
            twentyFourHourClock.addOneSecond();
            break;
        case 4:
            exitProgram = true;
            std::cout << "Exiting program." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }
    }

    return 0;
}
