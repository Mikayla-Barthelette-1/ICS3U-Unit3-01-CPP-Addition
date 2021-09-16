// Copyright (c) 2021 Mikayla Barthelette All rights reserved
//
// Created by: Mikayla Barthelette
// Created on: Sept 2021
// This program adds 2 integers

#include <iostream>

int main() {
    // this function adds the 2 numbers
    int integer_1;
    int integer_2;
    int sum;

    // input
    std::cout << "Enter the first number to add (integer): ";
    std::cin >> integer_1;
    std::cout << "Enter the second number to add (integer): ";
    std::cin >> integer_2;

    // process
    sum = integer_1 + integer_2;

    // output
    std::cout << std::endl;
    std::cout << integer_1 << " + " << integer_2 << " = " << sum << std::ends;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::ends;
}
