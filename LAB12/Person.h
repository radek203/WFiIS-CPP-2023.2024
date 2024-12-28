//
// Created by Radek on 18.06.2024.
//

#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person {
protected:
    std::string name;
public:
    virtual ~Person();
    Person(std::string _name);
    virtual void print() const;

    friend std::ostream &operator<<(std::ostream &os, const Person &person);
};


#endif //PERSON_H
