// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: May 2022
// This program converts levels to percentages

#include <iostream>
#include <string>

std::string percentage(std::string level) {
    std::string answer;

    if (level == "4+") {
        answer = "97%";
    } else if (level == "4") {
        answer = "90%";
    } else if (level == "4-") {
        answer = "83%";
    } else if (level == "3+") {
        answer = "78%";
    } else if (level == "3") {
        answer = "74%";
    } else if (level == "3-") {
        answer = "71%";
    } else if (level == "2+") {
        answer = "68%";
    } else if (level == "2") {
        answer = "64%";
    } else if (level == "2-") {
        answer = "61%";
    } else if (level == "1+") {
        answer = "58%";
    } else if (level == "1") {
        answer = "54%";
    } else if (level == "1-") {
        answer = "51%";
    } else if (level == "R") {
        answer = "25%";
    } else {
        answer = "-1";
    }

    return answer;
}


main() {
    // This function gets the level

    std::string level;
    std::string answer;

    std::cout << "Enter the level you want converted to a percentage: ";
    std::cin >> level;

    // call functions
    answer = percentage(level);

    // output
    std::cout << "Level " << level << " has a middle percentage of "
    << answer << "." << std::endl;
}
