//
// Created by radek203 on 6/18/24.
//

#ifndef KSZTALT_H
#define KSZTALT_H

#include <iostream>

class Ksztalt {
protected:
    int a;
public:
    Ksztalt(int _a);
    virtual double polePow() const { return 0; }
    virtual void wypisz() const {}
};

void wypisz(const Ksztalt &ksztalt);

#endif //KSZTALT_H
