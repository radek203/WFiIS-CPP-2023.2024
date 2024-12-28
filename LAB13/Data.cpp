//
// Created by Radek on 18.06.2024.
//

#include "Data.h"

IntData::~IntData() {
    std::cout << "~IntData()" << std::endl;
}

IntData::IntData(const int _val) : val(_val) {

}

void IntData::print() const {
    std::cout << val;
}

Data *IntData::clone() const {
    return new IntData(val);
}

StringData::~StringData() {
    std::cout << "~StringData()" << std::endl;
}

StringData::StringData(const std::string _val) : val(_val) {

}

void StringData::print() const {
    std::cout << "\"" << val << "\"";
}

Data *StringData::clone() const {
    return new StringData(val);
}