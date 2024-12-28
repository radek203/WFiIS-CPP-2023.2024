//
// Created by Radek on 18.06.2024.
//

#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <iostream>

class CompareCplx;
enum class CPLX;

class GameObject {
public:
    virtual ~GameObject() = default;

    static const std::string CPLXNames[3];
    enum class CPLX {
        HIGHEST,
        MID,
        LOWEST
    };

    virtual void printComplexity() = 0;
    virtual void interact() = 0;

    friend class CompareCplx;
protected:
    CPLX complexity;
};

class CompareCplx {
public:
    bool operator()(const GameObject* a, const GameObject* b) const {
        return a->complexity > b->complexity;
    }
};



#endif //GAMEOBJECT_H
