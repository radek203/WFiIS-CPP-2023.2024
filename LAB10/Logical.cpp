//
// Created by Radek on 18.06.2024.
//

#include "Logical.h"

namespace Logical {

    bool eval(const OneArg &oneArg, const bool b1) {
        return oneArg.result(b1);
    }

    bool eval(const TwoArg &twoArg, const bool b1, const bool b2) {
        return twoArg.result(b1, b2);
    }

}

bool NOT::result(const bool b1) const {
    return !b1;
}

bool OR::result(const bool b1, const bool b2) const {
    return b1 || b2;
}

bool AND::result(const bool b1, const bool b2) const {
    return b1 && b2;
}