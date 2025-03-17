// Copyright (c) 2025 Gustav I All rights reserved.
// Created by: Gustav I
// Created on: March 16, 2025
// This program demonstrates local and global variables.

#include <iostream>

// Global variable
int variableX = 45;  // Changed from previous value

int localVariable() {
    // Local variables
    int variableX = 20;  // Local scope hides global variableX
    int variableY = 25;  // New values applied

    // Processing
    variableX = variableX + 1;
    int variableZ = variableX + variableY;

    // Output
    std::cout << "Local variable: " << variableX << " + " << variableY
              << " = " << variableZ << std::endl;
    return 0;
}

int globalVariable() {
    // Uses global variable
    int variableY = 25;  // Keeping same as local for contrast

    // Processing
    variableX = variableX + 1;
    int variableZ = variableX + variableY;

    // Output
    std::cout << "Global variable: " << variableX << " + " << variableY
              << " = " << variableZ << std::endl;
    return 0;
}

int main() {
    // Breakpoints set at:
    // - localVariable() function definition
    // - globalVariable() function definition
    // - localVariable() function call
    // - globalVariable() function call

    localVariable();
    globalVariable();

    std::cout << "\nDone." << std::endl;
    return 0;
}
