//
// Created by radek203 on 6/17/24.
//

#ifndef CPLXVECTOR_H
#define CPLXVECTOR_H

#include <iostream>
#include <array>
#include <math.h>

class CplxNumber
{
    double re;
    double im;
public:
    CplxNumber() = default;
    CplxNumber(double _re, double _im);
    void Print(bool end = true);
    operator std::string();
    explicit operator double();

    static double Abs(CplxNumber &num);
};

class CplxVector {
    std::array<CplxNumber, 3> arr = {};
public:
    CplxVector() = default;
    CplxVector(double d);
    CplxVector &SetX(CplxNumber &num);
    CplxVector &SetY(double re, double im);
    CplxVector &SetZ(double re, double im);
    CplxNumber &X();
    void Print();
};



#endif //CPLXVECTOR_H
