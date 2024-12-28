//
// Created by Radek on 18.06.2024.
//

#ifndef GRADE_H
#define GRADE_H

#include "Student.h"
#include "Faculty.h"

class Grade : public Student, public Faculty {
protected:
    double val;
public:
    virtual ~Grade();
    Grade(const std::string& _name, int id, const std::string &_spec, double _val);
    virtual void print() const;
};


#endif //GRADE_H
