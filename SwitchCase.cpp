#include <iostream>
using namespace std;

int main() {
    int number = 10;

    if (number == 20) { // Changed = to ==, which is the proper logical operator to check for equivalence
        cout << "Number is 20" << endl;
    }
    else {
        cout << "Number is not 20" << endl;
    }

    for (int i = 0; i <= 5; i++) { // Added curly bracket to begin block of code in for loop, and got rid of extra semicolon
        cout << i << endl;
    } // Added curly bracket to end block of code

    return 0;
}
