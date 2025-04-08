#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter the current year: ";
    cin >> year;

    bool isLeapYear = year % 4 == 0 && true || false;
    cout << isLeapYear << endl;
}