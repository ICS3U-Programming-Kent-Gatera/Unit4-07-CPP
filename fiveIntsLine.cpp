// Copyright [2022] <Mr. Kent>"  [legal/copyright]
//
// Date : 11 - 20 - 22
// The code prints numbers in range 1000-2000 on a new line every 5 numbers.

#include <iostream>

int main() {
    // I defined the integers in the range as int for readability.
    for (int loopCounter = 1000; loopCounter <= 2000; loopCounter++) {
        // for every 5 numbers a new line will be created.
        if (loopCounter % 5 == 0) {
            std::cout << loopCounter << std::endl;
            continue;
        }
        // Output for every other number.
        std::cout << loopCounter << " ";
    }
}
