#include <iostream>

int main()
{
    // Print all even numbers from 1 - 50
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) { // Check if number is even using modulus
            std::cout << i << std::endl; // Print even number
        }
    }

    // Create an array to store 10 integers
    int numbers[10] = {};
    
    // Let the itterator begin at 0
    int i = 0; 

    // Loop until i is 10
    while (i < 10) {
        std::cout << "Enter a number: ";
        std::cin >> numbers[i]; // Get an input integer
        i++; // Increment itterator
    }

    // Print out all 10 inputted integers from the array
    for (int i = 0; i < 10; i++) {
        std::cout << numbers[i] << std::endl;
    }
}