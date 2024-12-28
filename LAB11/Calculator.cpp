//
// Created by Radek on 18.06.2024.
//

#include "Calculator.h"

int Calculator::operator ()() const {
    return val;
}

int Calculator::operator ()(const std::function<int(int)>& fun) const {
    return fun(val);
}

int Calculator::operator ()(const std::function<int(int, int)>& fun, const int i) const {
    return fun(val, i);
}

Calculator &Calculator::operator=(const int i) {
    val = i;
    return *this;
}

int Calculator::operator ++(int i) const {
    const int copy = val;
    val++;
    return copy;
}

int Calculator::operator --() const {
    val--;
    return val;
}

int Calculator::operator *(const int i) const {
    val *= i;
    return val;
}

int operator *(const int i, const Calculator &calc) {
    calc.val *= i;
    return calc.val;
}