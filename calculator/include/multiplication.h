//
// Created by terselich on 4/15/20.
//

#ifndef RPN_TDD_MULTIPLICATION_H
#define RPN_TDD_MULTIPLICATION_H

#include "math_operator.h"

class multiplication : public math_operator {

    public:
        /* Default 6 special members */
        multiplication() = default;
        multiplication(const multiplication&) = default;
        multiplication(multiplication&&) noexcept = default;
        multiplication& operator=(const multiplication&) = default;
        multiplication& operator=(multiplication&&) noexcept = default;
        ~multiplication() noexcept = default;

        double evaluate(int,int);
};

#endif //RPN_TDD_MULTIPLICATION_H
