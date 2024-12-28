//
// Created by radek203 on 6/17/24.
//

#ifndef POINTCLOUD_H
#define POINTCLOUD_H

#include <iostream>
#include <array>
#include <vector>

class APointCloud;
class VPointCloud;

class Point3D
{
    std::array<double, 3> arr = {};
public:
    Point3D() = default;
    Point3D(std::initializer_list<double> list);
    void displayCoordinates() const;

    friend class APointCloud;
    friend class VPointCloud;
};

class APointCloud
{
    int size = 0;
    Point3D *points = nullptr;
public:
    ~APointCloud();
    void addPoint(const Point3D &point);
    void displayPoints() const;
    Point3D geoCentre() const;

    friend class VPointCloud;
};

class VPointCloud
{
    std::vector<Point3D> points = {};
public:
    void addPoint(const Point3D &point);
    void add(const APointCloud &cloud);
    int count() const;
    Point3D geoCentre();
};


#endif //POINTCLOUD_H
