//
// Created by Radek on 18.06.2024.
//

#ifndef DIR_H
#define DIR_H

#include "File.h"
#include <vector>

class Dir : public File {
    std::vector<File*> files = {};
public:
    ~Dir();
    Dir(const std::string &_name);
    Dir &operator +=(File *file);
    void add(File *file);
    Dir *findDir(const std::string &_name);
    void listDirs(int i);
    void getDirs(std::vector<Dir*> &dirs, int level);
    void print(std::ostream &os, int spaces) const override;

    friend std::ostream &operator<<(std::ostream &os, const Dir &dir);
};


#endif //DIR_H
