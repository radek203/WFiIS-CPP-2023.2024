//
// Created by Radek on 18.06.2024.
//

#ifndef LIST_H
#define LIST_H

#include "Data.h"
#include <deque>

class List {
    std::deque<Data*> vec = {};
public:
    static constexpr bool Begin = true;
    static constexpr bool End = false;

    ~List();
    List() = default;
    List(const List &other);
    List &insert(const Data &data, const bool where = End);
    void print() const;
};


#endif //LIST_H
