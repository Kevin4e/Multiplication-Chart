#include <iostream>
#include "../../includes/ChallengeMode/level1.h"
#include "../../includes/ChallengeMode/level2.h"
#include "../../includes/ChallengeMode/level3.h"
#include "../../includes/ChallengeMode/game.h"

void startGame(){
    std::cout << "Welcome to the Multiplication Chart: Challenge Mode!" << std::endl;
    std::cout << std::endl;

    level1();
    level2();
    level3();
}
