//
// Created by radek203 on 6/17/24.
//

#include "Angle.h"

double getDegrees(double angle) {
    angle = fmod(angle, 360.0);
    if (angle < 0) {
        angle += 360.0;
    }

    return angle;
}

double getRadians(double angle) {
    angle = fmod(angle, 2 * M_PI);
    if (angle < 0) {
        angle += 2 * M_PI;
    }

    return angle;
}

void Angle::print() const
{
    std::cout << "Angle [rad]: " << angle << std::endl;
}

Angle Angle::add(const Angle &angle) const
{
    double d = this->angle + angle.angle;
    Angle sum;
    sum.angle = getRadians(d);
    return sum;
}

Angle Angle::fromRadians(double d)
{
    std::cout << "... creating angle from radians." << std::endl;

    d = getRadians(d);

    Angle angle = {};
    angle.angle = d;

    return angle;
}

Angle Angle::fromDegrees(double d)
{
    std::cout << "... creating angle from degrees." << std::endl;

    d = getDegrees(d);

    Angle angle = {};
    angle.angle = d * 2 * M_PI / 360;

    return angle;
}

double Angle::toDeg() const
{
    return angle * 360 / (2 * M_PI);
}
