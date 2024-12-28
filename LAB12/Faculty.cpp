//
// Created by Radek on 18.06.2024.
//

#include "Faculty.h"

#include <utility>

Faculty::~Faculty() {
    std::cout << "~" << spec << " (faculty)" << std::endl;
}

void Faculty::print() const {
    Person::print(); std::cout << ", spec (faculty): " << spec;
}

Faculty::Faculty(const std::string& _name, std::string _spec) : Person(_name), spec(std::move(_spec)) {

}