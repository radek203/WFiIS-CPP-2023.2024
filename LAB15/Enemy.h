//
// Created by Radek on 18.06.2024.
//

#ifndef ENEMY_H
#define ENEMY_H

#include "GameObject.h"

class Enemy final : public GameObject, public Renderable, public Collidable, public Updatable {
public:
    void action() override {
        std::cout << "Performing enemy-specific action" << std::endl;
        render();
        collide();
        update();
    }
};


#endif //ENEMY_H
