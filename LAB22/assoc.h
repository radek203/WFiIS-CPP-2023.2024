//
// Created by Radek on 19.06.2024.
//

#ifndef ASSOC_H
#define ASSOC_H

#include <iostream>
#include <map>

template<typename key_T, typename val_T>
class Assoc {
    mutable std::map<key_T, val_T> values = {};

public:
    void insert(key_T key, val_T val) const;

    void print(const std::string &_text) const;

    bool contains(key_T key) const;

    val_T &operator [](key_T key) const;
};

std::string print(bool val);

std::string operator*(const std::string &_text, int i);

std::string operator*(int i, const std::string &_text);

template<typename key_T, typename val_T>
void Assoc<key_T, val_T>::insert(key_T key, val_T val) const {
    values[key] = val;
}

template<typename key_T, typename val_T>
void Assoc<key_T, val_T>::print(const std::string &_text) const {
    for (auto it = values.rbegin(); it != values.rend(); ++it) {
        std::cout << "--- " << _text << " --- klucz: " << it->first << " wartosc: " << it->second << std::endl;
    }
}

template<typename key_T, typename val_T>
bool Assoc<key_T, val_T>::contains(key_T key) const {
    return values.find(key) != values.end();
}

template<typename key_T, typename val_T>
val_T &Assoc<key_T, val_T>::operator [](key_T key) const {
    return values[key];
}

#endif //ASSOC_H
