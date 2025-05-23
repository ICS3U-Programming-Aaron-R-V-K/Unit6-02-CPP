// Copyright (2025) Aaron Rivelino All rights reserved.
// Date: May 23, 2025
// The program places the numbers into
// a single variable list and prints them to the console
// It will generate 10 random numbers from 1 to a 100
// Then it will display the highest number generated

// For std::array
#include <array>
#include <cstdlib>
#include <ctime>
#include <iostream>

// Constants ad integers
const int MAX_ARRAY_SIZE = 10;
const int MIN_NUM = 0;
const int MAX_NUM = 100;

// Function to find the maximum value in the array
int findMaxValue(const std::array<int, MAX_ARRAY_SIZE> arrayOfInt) {
    // Start with the first element as the maximum
    int maxValue = arrayOfInt[0];

    // Loop through the array
    for (int i = 1; i < arrayOfInt.size(); ++i) {
        // If the number is greater than maxValue, update maxValue
        if (arrayOfInt[i] > maxValue) {
            maxValue = arrayOfInt[i];
        }
    }

    // Return the highest value found
    return maxValue;
}

int main() {
    // Seed random number generator
    std::srand(std::time(NULL));

    // Declare a fixed-size array of integers
    std::array<int, MAX_ARRAY_SIZE> arrayOfInt;

    // Fill array with random numbers using .size()
    for (int i = 0; i < arrayOfInt.size(); ++i) {
        // Generate random number between MIN_NUM and MAX_NUM inclusive
        int num = (std::rand() % (MAX_NUM - MIN_NUM + 1)) + MIN_NUM;
        arrayOfInt[i] = num;            // Store in array
        std::cout << num << std::endl;  // Print the number
    }

    // Find and print the max value using the function
    int highestValue = findMaxValue(arrayOfInt);
    std::cout << "Max value is " << highestValue << std::endl;
}
