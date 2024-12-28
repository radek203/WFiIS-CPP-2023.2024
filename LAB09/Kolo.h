//
// Created by radek203 on 6/18/24.
//

#ifndef KOLO_H
#define KOLO_H

#include "Ksztalt.h"

class Kolo : public Ksztalt {
public:
    Kolo(int _a);
    double polePow() const override;
    void wypisz() const override;
};

#endif //KOLO_H
