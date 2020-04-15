//
// Created by terselich on 4/15/20.
//

#ifndef RPN_TDD_ADDITION_H
#define RPN_TDD_ADDITION_H


#include "math_operator.h"

class addition : public math_operator {

    public:
        /* Default 6 special members */
        addition() = default;
        addition(const addition&) = default;
        addition(addition&&) noexcept = default;
        addition& operator=(const addition&) = default;
        addition& operator=(addition&&) noexcept = default;
        ~addition() noexcept = default;

        double evaluate(int,int);
};


#endif //RPN_TDD_ADDITION_H
