//
// Created by Radek on 18.06.2024.
//

#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <functional>

class Calculator {
    mutable int val = 0;
public:
    int operator ()() const;
    int operator ()(const std::function<int(int)>& fun) const;
    int operator ()(const std::function<int(int, int)>& fun, int i) const;
    Calculator &operator=(int i);
    int operator ++(int i) const;
    int operator --() const;
    int operator *(int i) const;

    friend int operator *(int i, const Calculator &calc);
};


#endif //CALCULATOR_H
