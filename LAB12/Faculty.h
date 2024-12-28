//
// Created by Radek on 18.06.2024.
//

#ifndef FACULTY_H
#define FACULTY_H

#include "Person.h"

class Faculty : public virtual Person {
protected:
    std::string spec;
public:
    virtual ~Faculty();
    Faculty(const std::string& _name, std::string  _spec);
    virtual void print() const;
};


#endif //FACULTY_H
