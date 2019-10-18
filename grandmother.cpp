// Copyright (c) 2019 Joseph Palermo All rights reserved.
//
// Created by: Joseph Palermo
// Created on: October 2019
// This program checks the grandmothers approval
// or incorrect


#include <iostream>
#include <string>

int main() {
    // This function checks the grandmothers approval


    // variables
    std::string userRich;
    std::string userGoodLooking;

    // Input
    std::cout << "This is an application to see if you're good enough for my "
                 "grandchild." << std::endl;
    std::cout << "Are you rich? (True or False): " << std::endl;
    std::cin >> userRich;
    std::cout << "Are you good looking? (True or False): " << std::endl;
    std::cin >> userGoodLooking;

    // Process
    if (userRich == "True" || userGoodLooking == "True") {
        std::cout << "Good job child, you can date my grandchild. "
                     "But if you hurt her I will hurt you." << std::endl;
    }  else {
            std::cout << "thank u, next" << std::endl;
    }
}
