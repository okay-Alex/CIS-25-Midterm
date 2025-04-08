#include <iostream>
using namespace std;

int main()
{
    // Define variables to store user input for username and favoriteNumber
    string username;
    int favoriteNumber;

    cout << "Enter your username: ";
    cin >> username;

    cout << "Enter your favorite number: ";
    cin >> favoriteNumber;

    // Combine username and favoriteNumber into one output string
    cout << "Your username is: " + username + ", and your favorite number is: " << favoriteNumber << "." << endl;

    // Define variables of different types
    int secondFavoriteNumber = 7;
    float favoriteDecimal = 0.5;
    char firstInitial = 'A';
    string myName = "Alex";
    bool sleepy = false;

    // Output variables
    cout << favoriteDecimal << endl;
    cout << secondFavoriteNumber << endl;
    cout << firstInitial << endl;
    cout << myName << endl;
    cout << sleepy << endl;
}
