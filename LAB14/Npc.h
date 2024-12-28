//
// Created by Radek on 18.06.2024.
//

#ifndef NPC_H
#define NPC_H

#include "GameObject.h"

class NPC final : public GameObject {
public:
    NPC() {
        complexity = CPLX::LOWEST;
    }

    void printComplexity() override {
        std::cout << "NPC complexity: " << CPLXNames[static_cast<int>(complexity)] << std::endl;
    }

    void interact() override {
        std::cout << "NPC talks!" << std::endl;
    }

};


#endif //NPC_H
