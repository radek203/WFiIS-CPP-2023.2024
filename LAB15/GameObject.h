//
// Created by Radek on 18.06.2024.
//

#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <iostream>
#include <vector>
#include <algorithm>

class GameObject {
public:
    virtual ~GameObject() = default;

    static GameObject *addGameObject(GameObject *obj);
    static void destroyGameObject(const GameObject *obj);
    static void destroyGameObjects();
    static std::vector<GameObject*> ActiveGameObjects();

    virtual void action();
};

class Renderable {
public:
    void render() {
        std::cout << "Rendering object" << std::endl;
    }
};

class Collidable {
public:
    void collide() {
        std::cout << "Handling collision" << std::endl;
    }
};

class Updatable {
public:
    void update() {
        std::cout << "Updating object" << std::endl;
    }
};

void performRuntimeTypeChecking(GameObject *obj);


#endif //GAMEOBJECT_H
