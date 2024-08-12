#include <iostream>
#include <random>
#include <chrono>

#include "../../includes/ChallengeMode/challenge.h"
#include "../../includes/ChallengeMode/attemptsNULL.h"

bool passLevel_1(unsigned int correctAnswers){
    return correctAnswers >= 5;
}

void level1(){
    unsigned int correctAnswers = 0;
    unsigned int userAttempts = 5;
    unsigned int userInput;

    std::cout << "! Level 1 !" << std::endl;
    std::cout << std::endl;
    std::cout << "Attempts: " << userAttempts << std::endl;
    std::cout << "Correct Answers needed: 5" << std::endl;
    std::cout << std::endl;

    auto seed = std::chrono::steady_clock::now().time_since_epoch().count();
    std::mt19937 gen(seed);

    std::uniform_int_distribution<> range(1, 10);

    while (true){
        unsigned int n1 = range(gen);
        unsigned int n2 = range(gen);
        unsigned int result = n1*n2;

        std::string operation = std::to_string(n1) + "x" + std::to_string(n2);

        std::cout << operation << std::endl;

        std::cin >> userInput;

        if (userInput == result) {
            std::cout << "Correct!" << std::endl;
            std::cout << std::endl;
            correctAnswers++;
        }
        else {
            std::cout << "Wrong!" << std::endl;
            std::cout << std::endl;
            userAttempts--;
        }

        if (passLevel_1(correctAnswers) ) {
            std::cout << "Congratulations! You are now at Level 2." << std::endl;
            std::cout << std::endl;
            level2();
        }

        else if (attemptsNULL(userAttempts) ) {
            std::cout << "Game over! Better luck next time." << std::endl;

            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "Press 'X' button to close the program." << std::endl;

            while (true) {
                std::cin.get();
            }
        }
    }
}
