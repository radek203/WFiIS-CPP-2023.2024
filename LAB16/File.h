//
// Created by Radek on 18.06.2024.
//

#ifndef FILE_H
#define FILE_H

#include <iostream>

class File {
protected:
    std::string name;
public:
    virtual ~File() = default;

    File(std::string _name);

    virtual void print(std::ostream &os, int spaces) const;
};


#endif //FILE_H
