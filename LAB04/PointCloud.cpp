//
// Created by radek203 on 6/17/24.
//

#include "PointCloud.h"

Point3D::Point3D(double d) : Point3D({d, d, d})
{

}

Point3D::Point3D(const std::initializer_list<double> list) : wsp(list)
{

}

void Point3D::displayCoordinates() const
{
    std::cout << to_string(*this) << std::endl;
}

Point3D::operator double() const {
    return sqrtf(wsp[0] * wsp[0] + wsp[1] * wsp[1] + wsp[2] * wsp[2]);
}

Point3D::operator std::string() const
{
    return "(" + std::to_string(wsp[0]) + ", " + std::to_string(wsp[1]) + ", " + std::to_string(wsp[2]) + ")";
}

std::string Point3D::to_string(const Point3D &point)
{
    return static_cast<std::string>(point);
}

VPointCloud::~VPointCloud()
{
    for (Point3D *point : points)
    {
        delete point;
    }
    points.clear();
}

VPointCloud::VPointCloud(VPointCloud &&cloud)
{
    for (Point3D *point : cloud.points)
    {
        points.push_back(point);
    }
    cloud.points.clear();
}

void VPointCloud::addPoint(Point3D *point)
{
    points.push_back(point);
}

void VPointCloud::displayPoints() const {
    for (auto &point : points)
    {
        std::cout << Point3D::to_string(*point) << std::endl;
    }
}

void VPointCloud::add(VPointCloud &cloud)
{
    if (this != &cloud)
    {
        for (auto &point : cloud.points)
        {
            points.push_back(point);
        }
    }
}