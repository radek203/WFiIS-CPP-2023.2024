//
// Created by radek203 on 6/17/24.
//

#ifndef POINTCLOUD_H
#define POINTCLOUD_H

#include <iostream>
#include <vector>
#include <math.h>

class Point3D
{
    std::vector<double> wsp;
public:
    Point3D(double d);
    Point3D(std::initializer_list<double> list);
    void displayCoordinates() const;
    explicit operator double() const;
    operator std::string() const;

    std::string static to_string(const Point3D &point);
};

class VPointCloud {
    std::vector<Point3D*> points = {};
public:
    ~VPointCloud();
    VPointCloud() = default;
    VPointCloud(VPointCloud &&cloud);
    void addPoint(Point3D *point = new Point3D(0));
    void displayPoints() const;
    void add(VPointCloud &cloud);
};



#endif //POINTCLOUD_H
