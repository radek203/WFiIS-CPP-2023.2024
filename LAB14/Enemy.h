//
// Created by Radek on 18.06.2024.
//

#ifndef ENEMY_H
#define ENEMY_H

#include "GameObject.h"

class Enemy : public GameObject {
public:
    Enemy() {
        complexity = CPLX::MID;
    }

    void printComplexity() override {
        std::cout << "Enemy complexity: " << CPLXNames[static_cast<int>(complexity)] << std::endl;
    }

    void interact() override {
        std::cout << "Enemy attacks!" << std::endl;
    }

};


#endif //ENEMY_H
