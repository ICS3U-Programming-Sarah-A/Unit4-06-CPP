// Copyright (c) 2022 Sarah All rights reserved.
//
// Created by: Sarah
// Created on: May, 1st, 2022
// This program displays different RGB colour codes up to 50 using a nested for
//  loop.
#include <iostream>


int main() {
    // declare variables
    int counter1;
    int counter2;
    int counter3;

    // display opening message
    std::cout << "These are the RGB colour combinations up to 50";

    // determines different colour code & displays results on console
    for (counter1 = 0; counter1 <= 51; counter1++) {
        for (counter2 = 0; counter2 <= 51; counter2++) {
            for (counter3 = 0; counter3 <= 51; counter3++) {
                std::cout << "RGB: " << counter1 << ", " << counter2
                << ", " << counter3 << "\n";
            }
        }
    }
}
