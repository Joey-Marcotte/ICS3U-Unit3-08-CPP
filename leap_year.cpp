// Copyright (c) 2019 Joey Marcotte All rights reserved.
//
// Created by: Joey Marcotte
// Created on: October 2019
// This program shows if a year is a leap year
// with user input

#include <iostream>
#include <cstdlib>
#include <string>

int main() {
    std::string year_as_string;
    int year_as_number;


    while (true) {
        // input
        std::cout << "Input year you would like to see: ";
        std::cin >> year_as_string;
        try {
            year_as_number = std::stoi(year_as_string);
            if (year_as_number >= 0) {
                if (year_as_number % 4 == 0 && year_as_number % 100 != 0) {
                    std::cout << "" << std::endl;
                    std::cout << "" << year_as_number << " is a leap year"
                    << std::endl;
                    break;
                } else if (year_as_number % 1000 == 0) {
                    std::cout << "" << std::endl;
                    std::cout << "" << year_as_number << " is a leap year"
                    << std::endl;
                    break; }
            } else {
                std::cout << "" << std::endl;
                std::cout << "" << year_as_number << " is not a leap year"
                << std::endl;
                break;
            }
        } catch (std::invalid_argument) {
            std::cout << "Not a valid year" << std::endl;
        }
    }
}
