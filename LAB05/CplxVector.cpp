//
// Created by radek203 on 6/17/24.
//

#include "CplxVector.h"

CplxNumber::CplxNumber(double _re, double _im) : re(_re), im(_im)
{

}

void CplxNumber::Print(const bool end)
{
    std::cout << static_cast<std::string>(*this);
    if (end)
    {
        std::cout << std::endl;
    }
}

CplxNumber::operator std::string()
{
    return "(" + std::to_string(re) + ", " + std::to_string(im) + ")";
}

CplxNumber::operator double()
{
    return sqrtf(re * re + im * im);
}

double CplxNumber::Abs(CplxNumber &num)
{
    return static_cast<double>(num);
}

CplxVector::CplxVector(double d)
{
    arr[0] = CplxNumber(d, d);
    arr[1] = CplxNumber(d, d);
    arr[2] = CplxNumber(d, d);
}

CplxVector &CplxVector::SetX(CplxNumber &num)
{
    arr[0] = num;

    return *this;
}

CplxVector &CplxVector::SetY(double re, double im)
{
    arr[1] = CplxNumber(re, im);

    return *this;
}

CplxVector &CplxVector::SetZ(double re, double im)
{
    arr[2] = CplxNumber(re, im);

    return *this;
}

CplxNumber &CplxVector::X()
{
    return arr[0];
}

void CplxVector::Print()
{
    std::cout << "[";
    for (int i = 0; i < 3; i++)
    {
        arr[i].Print(false);
        if (i != 2)
        {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}