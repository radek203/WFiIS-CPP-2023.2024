//
// Created by Radek on 18.06.2024.
//

#include "Dir.h"

Dir::~Dir() {
    for (const auto &file : files) {
        delete file;
    }
    files.clear();
}

Dir::Dir(const std::string &_name) : File(_name) {

}

Dir &Dir::operator +=(File *file) {
    files.push_back(file);

    return *this;
}

void Dir::add(File *file) {
    files.push_back(file);
}

Dir *Dir::findDir(const std::string &_name) {
    for (const auto &file : files) {
        const auto d = dynamic_cast<Dir*>(file);
        if (d->name == _name) {
            return d;
        }
        return d->findDir(_name);
    }
    return nullptr;
}

void Dir::listDirs(int i) {
    std::vector dirs = {this};
    getDirs(dirs, i);
    for (const auto &d : dirs) {
        std::cout << d->name << " ";
    }
    std::cout << std::endl;
}

void Dir::getDirs(std::vector<Dir*> &dirs, const int level) {
    if (level > 0) {
        for (const auto &file : files) {
            auto d = dynamic_cast<Dir*>(file);
            if (d) {
                dirs.push_back(d);
                d->getDirs(dirs, level - 1);
            }
        }
    }
}

void Dir::print(std::ostream &os, int spaces) const {
    for (int i = 0; i < spaces; i++) {
        os << " ";
    }
    os << name << " (DIR)" << std::endl;
    for (auto &file : files) {
        file->print(os, spaces + 1);
    }
}

std::ostream &operator<<(std::ostream &os, const Dir &dir) {
    dir.print(os, 0);
    return os;
}