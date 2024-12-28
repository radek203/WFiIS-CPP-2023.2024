//
// Created by Radek on 18.06.2024.
//

#ifndef MYCONTAINER_H
#define MYCONTAINER_H

#include <iostream>
#include <vector>

template<typename T>
class MyContainer {
    std::vector<T> vec = {};
public:
    void add(T elem);
    void print();
    int size();
    T get(int index);
};

template<typename T>
void MyContainer<T>::add(T elem) {
    vec.push_back(elem);
}

template<typename T>
int MyContainer<T>::size() {
    return vec.size();
}

template<typename T>
void MyContainer<T>::print() {
    for (auto &val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

template<typename T>
T MyContainer<T>::get(int index) {
    return vec[index];
}

template<typename T>
class MyContainer<T*> {
    std::vector<T*> vec = {};
public:
    void add(T* elem);
    void print();
    int size();
    T* get(int index);
};

template<typename T>
void MyContainer<T*>::add(T* elem) {
    vec.push_back(elem);
}

template<typename T>
int MyContainer<T*>::size() {
    return vec.size();
}

template<typename T>
void MyContainer<T*>::print() {
    for (auto &val : vec) {
        std::cout << *val << " ";
    }
    std::cout << std::endl;
}

template<typename T>
T* MyContainer<T*>::get(int index) {
    return vec[index];
}

#endif //MYCONTAINER_H
