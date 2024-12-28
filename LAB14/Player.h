//
// Created by Radek on 18.06.2024.
//

#ifndef PLAYER_H
#define PLAYER_H

#include "GameObject.h"

class Player final : public GameObject {
public:
    Player() {
        complexity = CPLX::HIGHEST;
    }

    void printComplexity() override {
        std::cout << "Player complexity: " << CPLXNames[static_cast<int>(complexity)] << std::endl;
    }

    void interact() override {
        std::cout << "Player moves!" << std::endl;
    }

};


#endif //PLAYER_H
