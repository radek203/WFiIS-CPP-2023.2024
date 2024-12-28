//
// Created by radek203 on 6/17/24.
//

#include "GOperations.h"

ciag copy;

ciag InicjalizujCiagGeometryczny(const rozmiarCiagu size, float start, const float iloraz)
{
    ciag c = new double[size];
    c[0] = start;

    for (int i = 1; i < size; i++)
    {
        c[i] = c[i-1] * iloraz;
    }

    copy = c;

    return c;
}

void UsunCiagi()
{
    delete []copy;
    copy = nullptr;
}

void Wypisz(ciag c, int max)
{
    for (int i = 0; i < max; i++)
    {
        std::cout << c[i] << " ";
    }
    std::cout << std::endl;
    UsunCiagi();
}

double Suma(ciag c, const rozmiarCiagu size)
{
    double s = 0.0;

    for (int i = 0; i < size; i++)
    {
        s += c[i];
    }

    return s;
}
double Srednia(ciag c, const rozmiarCiagu size)
{
    return Suma(c, size) / size;
}

double Wykonaj(operacja op, const ciag c, const rozmiarCiagu size)
{
    return op.op(c, size);
}