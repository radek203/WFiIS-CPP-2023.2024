//
// Created by radek203 on 6/18/24.
//

#include "Line.h"

Line::Line(const double _a, const double _b) : a(_a), b(_b)
{

}

std::ostream &operator<<(std::ostream &os, const Line &line)
{
    os << "y = " << line.a << "* x + " << line.b << "    x0 = " << (- line.b / line.a);

    return os;
}

LineSmartPtr::~LineSmartPtr()
{
    if (counter == 1)
    {
        delete line;
    }
}

LineSmartPtr::LineSmartPtr(Line *_line) : line(_line)
{

}

LineSmartPtr &LineSmartPtr::operator=(const LineSmartPtr &line_smart)
{
    if (counter == 1)
    {
        delete line;
    }

    line = line_smart.line;
    line_smart.counter++;

    return *this;
}

Line &LineSmartPtr::operator*() const {
    return *line;
}
