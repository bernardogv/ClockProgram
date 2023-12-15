/**
 * Author: Bernardo Gallegos
 * Project: Clock Program
 * Date: 11/8/2023
 * Description: This program simulates a 12-hour and 24-hour clock allowing user interaction.
 */

#ifndef MENU_H
#define MENU_H

#include <string>
// Function to display the menu
void displayMenu();
// Function to generate a string of asterisks
std::string generateAsterisks(int numAsterisks);
// Function to get the user's input
int getUserInput();

#endif // MENU_H
