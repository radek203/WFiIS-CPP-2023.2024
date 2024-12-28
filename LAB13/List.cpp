//
// Created by Radek on 18.06.2024.
//

#include "List.h"

List::~List() {
    for (auto i = vec.rbegin(); i != vec.rend(); ++i) {
        delete *i;
    }
    vec.clear();
}

List::List(const List &other) {
    for (auto &data : other.vec) {
        vec.push_back(data->clone());
    }
}

List &List::insert(const Data &data, const bool where) {
    if (where) {
        vec.push_front(data.clone());
    } else {
        vec.push_back(data.clone());
    }

    return *this;
}

void List::print() const {
    std::cout << "[";
    for (auto &data : vec) {
        data->print();
        if (&data != &vec.back()) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}
