//
// Created by radek203 on 6/18/24.
//

#ifndef LINE_H
#define LINE_H

#include <iostream>

class Line {
    double a;
    double b;
public:
    Line(double _a, double _b);

    friend std::ostream &operator<<(std::ostream &os, const Line &line);
};

class LineSmartPtr
{
    mutable int counter = 1;
    Line *line;
public:
    ~LineSmartPtr();
    LineSmartPtr(Line *_line);

    LineSmartPtr &operator=(const LineSmartPtr &line_smart);

    Line &operator*() const;
};

#endif //LINE_H
