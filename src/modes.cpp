#include <iostream>

#include "../includes/modes.h"

void chooseMode() {
    unsigned int choice;

    while (true) {
        std::cout << "Choose:" << std::endl;
        std::cout << "1. Practice Mode" << std::endl;
        std::cout << "2. Challenge Mode" << std::endl;
        std::cout << std::endl;
        std::cout << "Enter your choice (1 or 2): ";
        std::cin >> choice;
        std::cout << std::endl;

        if (choice == 1) {
            startPractice();
        } else if (choice == 2) {
            startChallenge();
        } else {
            std::cerr << "Please, insert 1 or 2 Other numbers are not allowed!" << std::endl;
			std::cout << std::endl;
        }
    }
}
