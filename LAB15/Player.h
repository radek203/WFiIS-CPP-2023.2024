//
// Created by Radek on 18.06.2024.
//

#ifndef PLAYER_H
#define PLAYER_H

#include "GameObject.h"

class Player final : public GameObject, public Renderable, public Collidable {
public:
    void action() override {
        std::cout << "Performing player-specific action..." << std::endl;
        render();
        collide();
    }
};


#endif //PLAYER_H
