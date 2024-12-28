//
// Created by radek203 on 6/17/24.
//

#ifndef GSERIES_H
#define GSERIES_H

#include <iostream>
#define LOOP_1 1
#define LOOP_2 1

using rozmiarCiagu = int;
using ciag = double *;

struct operacja {
    double (*op)(ciag, const rozmiarCiagu);
};


#endif //GSERIES_H
