#include <iostream>
#include <random>
#include <chrono>

#include "../../includes/ChallengeMode/game.h"
#include "../../includes/modes.h"
#include "../../includes/ChallengeMode/attemptsNULL.h"

bool passLevel_2(unsigned int correctAnswers){
    return correctAnswers >= 10;
}

void level2(){
    unsigned int correctAnswers = 0;
    unsigned int userAttempts = 25;
    unsigned int userInput;

    std::cout << "! Level 2 !" << std::endl;
    std::cout << std::endl;
    std::cout << "Attempts: " << userAttempts << std::endl;
    std::cout << "Correct Answers needed: 10" << std::endl;
    std::cout << std::endl;

    auto seed = std::chrono::steady_clock::now().time_since_epoch().count();
    std::mt19937 gen(seed);

    std::uniform_int_distribution<> range(1, 100);

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

        if (passLevel_2(correctAnswers) ) {
            std::cout << "Congratulations! You are now at Level 3." << std::endl;
            std::cout << std::endl;
            level3();
        }

        else if (attemptsNULL(userAttempts) ) {
            std::cout << "Game over! Better luck next time." << std::endl;
            exit(EXIT_FAILURE);
        }
    }
}
