//
// Created by Radek on 18.06.2024.
//

#include "Student.h"

Student::~Student() {
    std::cout << "~" << id << " (student)" << std::endl;
}

void Student::print() const {
    std::cout << "Student: "; Person::print(); std::cout << ", id (student): " << id;
}

Student::Student(const std::string &_name, const int _id) : Person(_name), id(_id) {

}