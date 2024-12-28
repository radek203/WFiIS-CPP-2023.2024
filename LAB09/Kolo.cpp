//
// Created by radek203 on 6/18/24.
//

#include "Kolo.h"

Kolo::Kolo(const int _a) : Ksztalt(_a)
{

}

double Kolo::polePow() const
{
    return 3.1415 * a * a;
}

void Kolo::wypisz() const
{
    std::cout << "Kolo o promieniu: " << a << std::endl;
}