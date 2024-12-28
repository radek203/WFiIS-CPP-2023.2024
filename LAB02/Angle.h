//
// Created by radek203 on 6/17/24.
//

#ifndef ANGLE_H
#define ANGLE_H

#include <iostream>
#include <math.h>


class Angle {
    double angle;
public:
    Angle() = default;
    Angle(double) = delete;
    void print() const;
    Angle add(const Angle &angle) const;
    static Angle fromRadians(double d);
    static Angle fromDegrees(double d);
    double toDeg() const;
};



#endif //ANGLE_H
