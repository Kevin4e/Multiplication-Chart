#include <iostream>

#include "../../includes/PracticeMode/chart10x10.h"
#include "../../includes/PracticeMode/chart100x100.h"
#include "../../includes/PracticeMode/chart1000x1000.h"
#include "../../includes/PracticeMode/practice.h"
#include "../../includes/modes.h"

void startPractice() {
     std::cout << "Welcome to the Multiplication Chart: Practice Mode!" << std::endl;
    std::cout << "" << std::endl;

    while (true) {
        unsigned int choice;
        std::cout << "Choose:" << std::endl;
        std::cout << "1. 10x10 Chart" << std::endl;
        std::cout << "2. 100x100 Chart" << std::endl;
        std::cout << "3. 1000x1000 Chart" << std::endl;
        std::cout << "0. Main Menu Restart" << std::endl;
        std::cout << "-1. Practice Menu Restart" << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Enter your choice (1, 2, 3, 0, or -1): ";
        std::cin >> choice;
        std::cout << std::endl;

        if (choice == -1) {
            continue;
        } else if (choice == 0) {
            chooseMode();
        } else if (choice == 1) {
            chart10x10();
        } else if (choice == 2) {
            chart100x100();
        } else if (choice == 3) {
            chart1000x1000();
        } else {
			std::cout << "Please, insert 1, 2, 3, 0, -1. Other numbers are not allowed!" << std::endl;
			std::cout << std::endl;
        }
    }
}
