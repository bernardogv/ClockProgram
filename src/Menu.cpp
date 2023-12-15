/**
 * Author: Bernardo Gallegos
 * Project: Clock Program
 * Date: 11/8/2023
 * Description: This program simulates a 12-hour and 24-hour clock allowing user interaction.
 */

#include "../include/Menu.h"
#include <iostream>

std::string generateAsterisks(int count)
{
    return std::string(count, '*');
}

void displayMenu()
{
    std::cout << generateAsterisks(30) << std::endl;
    std::cout << "* 1 - Add One Hour          *" << std::endl;
    std::cout << "* 2 - Add One Minute        *" << std::endl;
    std::cout << "* 3 - Add One Second        *" << std::endl;
    std::cout << "* 4 - Exit Program          *" << std::endl;
    std::cout << generateAsterisks(30) << std::endl;
}

int getUserInput()
{
    int input;
    while (!(std::cin >> input))
    { // Loop until valid input is entered
        std::cout << "Invalid input. Please enter a number: ";
        std::cin.clear();                                                   // Clear the error flag on cin
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore the rest of the current line
    }
    return input;
}
