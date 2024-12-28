//
// Created by Radek on 18.06.2024.
//

#ifndef LOGICAL_H
#define LOGICAL_H

class OneArg {
public:
    virtual ~OneArg() = default;

    virtual bool result(bool b1) const = 0;
};

class TwoArg {
public:
    virtual ~TwoArg() = default;

    virtual bool result(bool b1, bool b2) const = 0;
};

namespace Logical {

    bool eval(const OneArg &oneArg, bool b1);
    bool eval(const TwoArg &twoArg, bool b1, bool b2);

}

class NOT final : public OneArg {
public:
    bool result(bool b1) const override;
};

class OR final : public TwoArg {
public:
    bool result(bool b1, bool b2) const override;
};

class AND final : public TwoArg {
public:
    bool result(bool b1, bool b2) const override;
};

#endif //LOGICAL_H
