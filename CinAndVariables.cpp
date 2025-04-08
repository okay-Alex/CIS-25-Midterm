#include <iostream>
using namespace std;

int main()
{
    string username;
    int favoriteNumber;

    cout << "Enter your username: ";
    cin >> username;

    cout << "Enter your favorite number: ";
    cin >> favoriteNumber;

    cout << "Your username is: " + username + ", and your favorite number is: " << favoriteNumber << "." << endl;

    int secondFavoriteNumber = 7;
    float favoriteDecimal = 0.5;
    char firstInitial = 'A';
    string myName = "Alex";
    bool sleepy = false;

    cout << favoriteDecimal << endl;
    cout << secondFavoriteNumber << endl;
    cout << firstInitial << endl;
    cout << myName << endl;
    cout << sleepy << endl;
}
