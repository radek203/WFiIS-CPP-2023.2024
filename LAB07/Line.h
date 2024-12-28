//
// Created by radek203 on 6/18/24.
//

#ifndef LINE_H
#define LINE_H

#include <iostream>
#include <vector>

class LPrint;
class LArray;

class Line {
    double a;
    double b;
public:
    Line();
    Line(double d);
    double operator ()(double d) const;
    double X0() const;

    friend class LPrint;
};

class LPrint
{
public:
    void operator ()(const Line &line) const;
    void operator ()(const LArray &arr) const;
};

class LArray
{
    std::vector<Line> vec;
public:
    LArray(int size);
    LArray &Add(Line line);

    friend class LPrint;
};


#endif //LINE_H
