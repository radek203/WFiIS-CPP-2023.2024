//
// Created by Radek on 19.06.2024.
//

#include "assoc.h"

std::string print(const bool val) {
    return val ? "Znaleziono" : "Nie znaleziono";
}

std::string operator*(const std::string &_text, const int i) {
    std::string _final;
    for (int j = 0; j < i; j++) {
        _final += _text;
    }
    return _final;
}

std::string operator*(const int i, const std::string &_text) {
    return _text * i;
}
