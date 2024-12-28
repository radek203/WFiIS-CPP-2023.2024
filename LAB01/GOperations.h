//
// Created by radek203 on 6/17/24.
//

#ifndef GOPERATIONS_H
#define GOPERATIONS_H
#include "GSeries.h"

ciag InicjalizujCiagGeometryczny(const rozmiarCiagu size, float start, const float iloraz);

void UsunCiagi();

void Wypisz(ciag c, int max);

double Suma(ciag c, const rozmiarCiagu size);
double Srednia(ciag c, const rozmiarCiagu size);

double Wykonaj(operacja op, const ciag, const rozmiarCiagu size);



#endif //GOPERATIONS_H
