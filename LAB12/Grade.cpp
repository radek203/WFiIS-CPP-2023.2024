//
// Created by Radek on 18.06.2024.
//

#include "Grade.h"

Grade::~Grade() {
    std::cout << "~" << val << " (grade)" << std::endl;
}

void Grade::print() const {
    std::cout << "As a ";
    Student::print();
    std::cout << std::endl << "As a Faculty: ";
    Faculty::print();
    std::cout << std::endl << "Grade value (grade): " << val;
}

Grade::Grade(const std::string& _name, const int id, const std::string &_spec, const double _val) : Person(_name), Student(_name, id), Faculty(_name, _spec), val(_val) {

}