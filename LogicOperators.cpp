#include <iostream>
using namespace std;

int main()
{
    int year; // Define variable to store inputted year
    cout << "Enter the current year: ";
    cin >> year; // Store year from user input

    bool isLeapYear = year % 4 == 0 && true || false; // Check if year is a leap year, modulo by 4
    cout << isLeapYear << endl; // Print whether or not it is a leap year
}
