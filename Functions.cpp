#include <iostream>

float calculateArea(float length, float width) {
    // Multiply length by width to get area of rectangle, and return result
    return length * width;
}

bool isPrime(int number) {
    // Check base cases
    if (number <= 1) {
        // Less than or equal to 1, therefore the integer cannot be prime
        return false;
    } else if (number == 2) {
        // 2 is Prime, return true
        return true;
    } else if (number % 2 == 0) {
        // Even numbers besides 2 cannot be Prime
        return false;
    }

    // Itterate through integer from 3 to the number and check divisibility
    for (int i = 3; i < number; i++) {
        if (number % i == 0) {
            // Number has a factor, therefore it is not prime
            return false;
        }
    }
    
    return true;
}