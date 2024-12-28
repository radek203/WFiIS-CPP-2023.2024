//
// Created by radek203 on 6/18/24.
//

#ifndef KWADRAT_H
#define KWADRAT_H

#include "Ksztalt.h"

class Kwadrat : public Ksztalt {
public:
    Kwadrat(int _a);
    double polePow() const override;
    void wypisz() const override;
};

#endif //KWADRAT_H
