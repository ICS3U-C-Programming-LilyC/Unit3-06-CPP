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
#include<iostream>
#include<string>

int main() {
    // Declaring variables for user guess
    // as a string and the random number 
    // that will be generated.
    std::string userGuessAsString;
    int randomInteger;

    // Getting user input for their integer guess.
    std::cout << "Enter a integer between 0 and 9: ";
    std::cin >> userGuessAsString;

// Initiating try catch.
    try { 
        int userGuessAsInteger = std::stoi(userGuessAsString);
        if (userGuessAsInteger == randomInteger) {
            std::cout << "You guessed correctly! The number was " << userGuessAsInteger;
        } else {
            std::cout << "You guessed incorrectly.The correct number was " << userGuessAsInteger;
            }
    } catch (std::invalid_argument) {
        std::cout
            << userGuessAsInteger << "is not a valid integer.";
    }
}