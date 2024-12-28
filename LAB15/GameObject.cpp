//
// Created by Radek on 18.06.2024.
//

#include "GameObject.h"
#include "Player.h"
#include "Enemy.h"

std::vector<GameObject*> elems = {};

GameObject *GameObject::addGameObject(GameObject *obj) {
    elems.push_back(obj);
    return obj;
}

void GameObject::destroyGameObject(const GameObject *obj) {
    delete obj;
    elems.erase(remove_if(elems.begin(), elems.end(), [&](const GameObject *o) { return o == obj; }), elems.end());
}

void GameObject::destroyGameObjects() {
    for (const auto &obj : elems) {
        delete obj;
    }
}

std::vector<GameObject*> GameObject::ActiveGameObjects() {
    return elems;
}

void GameObject::action() {

}

void performRuntimeTypeChecking(GameObject *obj) {
    auto p = dynamic_cast<Player*>(obj);
    if (p) {
        std::cout << "Player object is ";
    }
    auto e = dynamic_cast<Enemy*>(obj);
    if (e) {
        std::cout << "Enemy object is ";
    }
    auto r = dynamic_cast<Renderable*>(obj);
    if (r) {
        std::cout << "renderable ";
    }
    auto c = dynamic_cast<Collidable*>(obj);
    if (c) {
        std::cout << "collidable ";
    }
    auto u = dynamic_cast<Updatable*>(obj);
    if (u) {
        std::cout << "updatable ";
    }
    std::cout << std::endl;
}