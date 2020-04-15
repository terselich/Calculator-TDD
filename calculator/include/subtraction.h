//
// Created by terselich on 4/15/20.
//

#ifndef RPN_TDD_SUBTRACTION_H
#define RPN_TDD_SUBTRACTION_H

#include "math_operator.h"

class subtraction : public math_operator {

    public:
        /* Default 6 special members */
        subtraction() = default;
        subtraction(const subtraction&) = default;
        subtraction(subtraction&&) noexcept = default;
        subtraction& operator=(const subtraction&) = default;
        subtraction& operator=(subtraction&&) noexcept = default;
        ~subtraction() noexcept = default;

        double evaluate(int,int);
};

#endif //RPN_TDD_SUBTRACTION_H
