//
// Created by Radek on 18.06.2024.
//

#include "Person.h"

#include <utility>

Person::~Person() {
    std::cout << "~" << name << " (person)" << std::endl;
}

Person::Person(std::string _name) : name(std::move(_name)) {

}

void Person::print() const {
    std::cout << "name (person): " << name;
}

std::ostream &operator<<(std::ostream &os, const Person &person) {
    person.print();
    return os;
}