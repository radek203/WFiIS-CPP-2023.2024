//
// Created by Radek on 18.06.2024.
//

#include "File.h"

#include <utility>

File::File(std::string _name) : name(std::move(_name)) {

}

void File::print(std::ostream &os, const int spaces) const {
    for (int i = 0; i < spaces; i++) {
        os << " ";
    }
    os << name << " (FILE)" << std::endl;
}