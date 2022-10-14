// Copyright (c) 2022 Joanne Santhosh All rights reserved
//
// Created by: Joanne Santhosh
// Created on: Sept 2022
// This is the guessing game program

#include <iostream>

int main() {
    // this function checks if guess is correct or incorrect
    const int GUESSING_NUMBER = 5;
    int userGuess;

    // input
    std::cout << "Enter a number between 0-9: ";
    std::cin >> userGuess;
    std::cout << "" << std::endl;

    // process
    if (userGuess != GUESSING_NUMBER) {
        // output
        std::cout << "Incorrect. Try again!";
    }

    if (userGuess == GUESSING_NUMBER) {
        // output
        std::cout << "Correct!";
    }

    std::cout << "\nDone." << std::endl;
}
