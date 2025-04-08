#include <iostream>
using namespace std;

int main()
{
	// Create variables to store inputted numbers
	float firstNumber;
	float secondNumber;
	float thirdNumber;

	cout << "Enter your first number: ";
	cin >> firstNumber;

	cout << "Enter your second number: ";
	cin >> secondNumber;

	cout << "Enter your third number: ";
	cin >> thirdNumber;

	if (firstNumber > secondNumber) { // Check if firstNumber is larger than secondNumber
		if (firstNumber > thirdNumber) { // Check if firstNumber is larger than thirdNumber
			cout << "The first number: " << firstNumber << ", is the largest!" << endl;
		}
		else { // thirdNumber is the largest
			cout << "The third number: " << thirdNumber << ", is the largest!" << endl;
		}
	}
	else { // secondNumber is larger than firstNumber
		if (secondNumber > thirdNumber) { // Check if secondNumber is larger than thirdNumber
			cout << "The second number: " << secondNumber << ", is the largest!" << endl;
		}
		else { // thirdNumber is the largest
			cout << "The third number: " << thirdNumber << ", is the largest!" << endl;
		}
	}
}
