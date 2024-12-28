//
// Created by radek203 on 6/17/24.
//

#include "PointCloud.h"

Point3D::Point3D(const std::initializer_list<double> list)
{
    int i = 0;
    for (const double p : list)
    {
        arr[i] = p;
        i++;
    }

}

void Point3D::displayCoordinates() const {
    std::cout << "(" << arr[0] << ", " << arr[1] << ", " << arr[2] << ")" << std::endl;
}

APointCloud::~APointCloud()
{
    delete []points;
    points = nullptr;
}

void APointCloud::addPoint(const Point3D &point)
{
    size++;

    auto *points_new = new Point3D[size];
    if (this->points)
    {
        for (int i = 0; i < size - 1; i++)
        {
            points_new[i] = this->points[i];
        }
    }
    delete []this->points;
    points_new[size - 1] = point;
    this->points = points_new;
}

void APointCloud::displayPoints() const {
    std::cout << "Chmura punktow [APC]:" << std::endl;
    for (int i = 0; i < size; i++)
    {
        this->points[i].displayCoordinates();
    }
}

Point3D APointCloud::geoCentre() const {
    Point3D point_sr({0, 0, 0});
    for (int i = 0; i < size; i++)
    {
        point_sr.arr[0] += points[i].arr[0];
        point_sr.arr[1] += points[i].arr[1];
        point_sr.arr[2] += points[i].arr[2];
    }
    point_sr.arr[0] /= size;
    point_sr.arr[1] /= size;
    point_sr.arr[2] /= size;
    return point_sr;
}

void VPointCloud::addPoint(const Point3D &point)
{
    points.push_back(point);
}

void VPointCloud::add(const APointCloud &cloud)
{
    for (int i = 0; i < cloud.size; i++)
    {
        points.push_back(cloud.points[i]);
    }
}

int VPointCloud::count() const {
    return points.size();
}

Point3D VPointCloud::geoCentre()
{
    Point3D point_sr({0, 0, 0});
    for (auto &point : points)
    {
        point_sr.arr[0] += point.arr[0];
        point_sr.arr[1] += point.arr[1];
        point_sr.arr[2] += point.arr[2];
    }
    point_sr.arr[0] /= points.size();
    point_sr.arr[1] /= points.size();
    point_sr.arr[2] /= points.size();
    return point_sr;
}