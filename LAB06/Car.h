//
// Created by radek203 on 6/18/24.
//

#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string.h>

class Car {
    char* brand;
    int year;
    int mileage;
public:
    ~Car();
    Car(const char* _brand, int _year, int _mileage);
    Car(const Car &car);
    Car(Car &&car);
    Car &operator=(const Car &car);
    Car &operator=(Car &&car);
    void displayInfo();
};



#endif //CAR_H
