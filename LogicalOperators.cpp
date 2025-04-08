#include <iostream>
using namespace std;

int main()
{
	float firstNumber;
	float secondNumber;
	float thirdNumber;

	cout << "Enter your first number: ";
	cin >> firstNumber;

	cout << "Enter your second number: ";
	cin >> secondNumber;

	cout << "Enter your third number: ";
	cin >> thirdNumber;

	if (firstNumber > secondNumber) {
		if (firstNumber > thirdNumber) {
			cout << "The first number: " << firstNumber << ", is the largest!" << endl;
		}
		else {
			cout << "The third number: " << thirdNumber << ", is the largest!" << endl;
		}
	}
	else {
		if (secondNumber > thirdNumber) {
			cout << "The second number: " << secondNumber << ", is the largest!" << endl;
		}
		else {
			cout << "The third number: " << thirdNumber << ", is the largest!" << endl;
		}
	}
}
