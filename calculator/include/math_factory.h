//
// Created by terselich on 4/15/20.
//

#ifndef RPN_TDD_MATH_FACTORY_H
#define RPN_TDD_MATH_FACTORY_H

#include <map>
#include <string>
#include <memory>
#include "addition.h"
#include "division.h"
#include "subtraction.h"
#include "multiplication.h"
#include "null_object.h"
#include "math_operator.h"


class math_factory : public math_operator {

    private:

        static std::unique_ptr<std::map<std::string, math_operator*>> pStringToMathObjectMap;
        static std::unique_ptr<std::map<std::string, math_operator*>> static_init_block();

    public:

        static math_operator* getMathObject(std::string str_operator = "" );

};

#endif //RPN_TDD_MATH_FACTORY_H
