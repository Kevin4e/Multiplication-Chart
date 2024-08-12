#include <iostream>
#include <random>
#include <chrono>

#include "../../includes/PracticeMode/practice.h"
#include "../../includes/modes.h"

void chart10x10() {
    std::cout << "Let's start!" << std::endl;
    std::cout << std::endl;

    auto seed = std::chrono::steady_clock::now().time_since_epoch().count();
    std::mt19937 gen(seed);

    std::uniform_int_distribution<> range(1, 10);

    while (true) {
        unsigned int result, userAttempt;
        unsigned int n1 = range(gen);
        unsigned int n2 = range(gen);
        result = n1*n2;

        std::string operation = std::to_string(n1) + "x" + std::to_string(n2);

        std::cout << operation << std::endl;

        std::cin >> userAttempt;

        if (userAttempt == result) {
            std::cout << "Correct!" << std::endl;
            std::cout << std::endl;
        }
        else if (userAttempt == -1) {
            std::cout << std::endl;
            startPractice();
        }
        else if (userAttempt == 0) {
            std::cout << std::endl;
            chooseMode();
        }
        else {
            std::cout << "Wrong!" << std::endl;
            std::cout << std::endl;
        }
    }
}
