//
// Created by radek203 on 6/18/24.
//

#include "Kwadrat.h"

Kwadrat::Kwadrat(const int _a) : Ksztalt(_a)
{

}

double Kwadrat::polePow() const
{
    return a*a;
}

void Kwadrat::wypisz() const
{
    std::cout << "Kwadrat o boku: " << a << std::endl;
}