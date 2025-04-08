#include <iostream>
using namespace std;

int main()
{
    float firstNumber;
    float secondNumber;
    char operation;

    cout << "Enter your first number: ";
    cin >> firstNumber;

    cout << "Enter your second number: ";
    cin >> secondNumber;

    cout << "Enter the operation you'd like to perform: ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << firstNumber + secondNumber << endl;
            break;
        case '-':
            cout << firstNumber - secondNumber << endl;
            break;
        case '*':
            cout << firstNumber * secondNumber << endl;
            break;
        case '/':
            cout << firstNumber / secondNumber << endl;
            break;
    }
}