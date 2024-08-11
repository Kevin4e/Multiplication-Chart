#include <iostream>

#include "../includes/modes.h"
#include "../includes/PracticeMode/practice.h"
#include "../includes/ChallengeMode/challenge.h"

void chooseMode() {
    unsigned int choice;

    while (true) {
        std::cout << "Choose:" << std::endl;
        std::cout << "1. Practice Mode" << std::endl;
        std::cout << "2. Challenge Mode" << std::endl;
        std::cout << "0. Main Menu Restart" << std::endl;
        std::cout << std::endl;
        std::cout << "Enter your choice (1, 2, or 0): ";
        std::cin >> choice;
        std::cout << std::endl;

        if (choice == 1) {
            startPractice();
        } else if (choice == 2) {
            startChallenge();
        } else if (choice == 0) {
            continue;
        } else {
            std::cout << "Please, insert 1, 2, or 0. Other numbers are not allowed!" << std::endl;
			std::cout << std::endl;
        }
    }
}
