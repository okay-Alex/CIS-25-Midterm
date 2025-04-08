#include <iostream>
using namespace std;

int main()
{
    // Declare variables to store inputted numbers and operator to use
    float firstNumber;
    float secondNumber;
    char operation;

    // Use cout for an input message, and use cin to get user input
    cout << "Enter your first number: ";
    cin >> firstNumber;

    cout << "Enter your second number: ";
    cin >> secondNumber;

    cout << "Enter the operation you'd like to perform: ";
    cin >> operation;

    // Switch case to determine which operation to apply
    switch (operation) {
        case '+': // Addition
            cout << firstNumber + secondNumber << endl;
            break;
        case '-': // Subtraction
            cout << firstNumber - secondNumber << endl;
            break;
        case '*': // Multiplication
            cout << firstNumber * secondNumber << endl;
            break;
        case '/': // Division
            cout << firstNumber / secondNumber << endl;
            break;
    }
}
