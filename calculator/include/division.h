//
// Created by terselich on 4/15/20.
//

#ifndef RPN_TDD_DIVISION_H
#define RPN_TDD_DIVISION_H

#include "math_operator.h"

class division : public math_operator {

    public:
        /* Default 6 special members */
        division() = default;
        division(const division&) = default;
        division(division&&)  noexcept = default;
        division& operator=(const division&) = default;
        division& operator=(division&&) noexcept = default;
        ~division() noexcept = default;

        double evaluate(int,int);
};

#endif //RPN_TDD_DIVISION_H
