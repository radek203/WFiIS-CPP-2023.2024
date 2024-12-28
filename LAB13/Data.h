//
// Created by Radek on 18.06.2024.
//

#ifndef DATA_H
#define DATA_H

#include <iostream>


class Data {
public:
    virtual ~Data() = default;
    virtual void print() const = 0;
    virtual Data *clone() const = 0;
};

class IntData : public Data {
    int val;
public:
    ~IntData() override;
    IntData(int _val);
    void print() const override;
    Data *clone() const override;
};

class StringData : public Data {
    std::string val;
public:
    ~StringData() override;
    StringData(const std::string _val);
    void print() const override;
    Data *clone() const override;
};


#endif //DATA_H
