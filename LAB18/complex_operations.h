//
// Created by Radek on 18.06.2024.
//

#ifndef COMPLEX_OPERATIONS_H
#define COMPLEX_OPERATIONS_H

#include <iostream>

class Complex {
    double re;
    double im;
public:
    Complex(const double _re, const double _im) : re(_re), im(_im) {

    }

    Complex operator +(const Complex &b) const {
        return Complex(re + b.re, im + b.im);
    }

    Complex operator *(const Complex &b) const {
        return Complex(re * b.re - im * b.im, re * b.im + im * b.re);
    }

    friend std::ostream &operator<<(std::ostream &os, const Complex &comp) {
        os << "(" << comp.re << ", " << comp.im << "i)";
        return os;
    }
};

template<typename T>
T add(const T *a, const T *b) {
    return *a + *b;
}

template<typename T>
T multiply(const T *a, const T *b) {
    return *a * *b;
}

#endif //COMPLEX_OPERATIONS_H
