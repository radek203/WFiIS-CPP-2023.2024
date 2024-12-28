//
// Created by radek203 on 6/18/24.
//

#include "Car.h"

Car::~Car()
{
    delete []brand;
}

Car::Car(const char* _brand, int _year, int _mileage)
{
    brand = new char[strlen(_brand) + 1];
    strcpy(brand, _brand);

    year = _year;
    mileage = _mileage;
}

Car::Car(const Car &car)
{
    brand = new char[strlen(car.brand) + 1];
    strcpy(brand, car.brand);

    year = car.year;
    mileage = car.mileage;
}

Car::Car(Car &&car)
{
    brand = new char[strlen(car.brand) + 1];
    strcpy(brand, car.brand);

    year = car.year;
    mileage = car.mileage;

    delete []car.brand;
    car.brand = nullptr;
}

Car &Car::operator=(const Car &car)
{
    if (this != &car)
    {
        delete []brand;
        brand = new char[strlen(car.brand) + 1];
        strcpy(brand, car.brand);

        year = car.year;
        mileage = car.mileage;
    }

    return *this;
}

Car &Car::operator=(Car &&car)
{
    if (this != &car)
    {
        delete []brand;
        brand = new char[strlen(car.brand) + 1];
        strcpy(brand, car.brand);

        year = car.year;
        mileage = car.mileage;

        delete []car.brand;
        car.brand = nullptr;
    }

    return *this;
}

void Car::displayInfo()
{
    if (brand)
    {
        std::cout << "Brand: " << brand << ", Year: " << year << ", Mileage: " << mileage << " km" << std::endl;
    } else
    {
        std::cout << "Brand: ?, Year: ?, Mileage: ? km" << std::endl;
    }
}