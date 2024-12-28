//
// Created by Radek on 18.06.2024.
//

#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public virtual Person {
protected:
    int id;
public:
    virtual ~Student();
    Student(const std::string &_name, int _id);
    virtual void print() const;
};


#endif //STUDENT_H
