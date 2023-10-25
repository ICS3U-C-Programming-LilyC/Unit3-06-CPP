// Copyright (c) 2023 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Oct/24/2023
// This programs allows for the generating
// of random numbers. The user can input
// a guess and my program will tell them
// if they got it right or wrong.
// My program will also catch any
//invalid inputs with a Try Catch.
#include <cstdlib>
#include <iostream>

int main() {
    // Declaring variables for user guess
    // as a string and the random number 
    // that will be generated.
    std::string userGuessAsString;
    int randomInteger, userGuessAsInteger;

    // Initializing the random generator.
    srand((unsigned)time(NULL));

    // Generating a random number between 0 and 9.
    randomInteger = 0 + rand() % 9;

    // Getting user input for their integer guess.
    std::cout << "Enter a integer between 0 and 9: ";
    std::cin >> userGuessAsString;

    // Initiating try catch.
    try { 
        userGuessAsInteger = std::stoi(userGuessAsString);
        if (userGuessAsInteger == randomInteger) {
            std::cout << "You guessed correctly! The number was " << randomInteger;
        } else {
            std::cout << "You guessed incorrectly.The correct number was " << randomInteger;
            }
    } catch (std::invalid_argument) {
        std::cout
            << userGuessAsString << " is not a valid integer.";
    }
}