//
// Created by radek203 on 6/18/24.
//

#include "Line.h"

Line::Line() : Line(1)
{

}

Line::Line(const double d) : a(d), b(d)
{

}

double Line::operator ()(const double d) const
{
    return a + d;
}

double Line::X0() const {
    return - b / a;
}

void LPrint::operator ()(const Line &line) const {
    std::cout << "y = " << line.a << "* x + " << line.b << "    x0 = " << line.X0() << std::endl;
}

void LPrint::operator ()(const LArray &arr) const {
    for (int i = 0; i < arr.vec.size(); i++)
    {
        std::cout << "[" << i << "] ";
        (*this)(arr.vec[i]);
    }
}

LArray::LArray(int size)
{

}

LArray &LArray::Add(const Line line)
{
    vec.push_back(line);

    return *this;
}