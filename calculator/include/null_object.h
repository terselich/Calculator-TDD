//
// Created by terselich on 4/15/20.
//

#ifndef RPN_TDD_NULL_OBJECT_H
#define RPN_TDD_NULL_OBJECT_H

#include <iostream>
#include "math_operator.h"

class null_object : public math_operator {
    public:
        /* Default 6 special members */
        null_object() = default;
        null_object(const null_object&) = default;
        null_object(null_object&&) noexcept = default;
        null_object& operator=(const null_object&) = default;
        null_object& operator=(null_object&&) noexcept = default;
        ~null_object() noexcept = default;

        double evaluate(int,int);
};

#endif //RPN_TDD_NULL_OBJECT_H
