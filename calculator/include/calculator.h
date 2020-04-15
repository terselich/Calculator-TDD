//
// Created by terselich on 4/15/20.
//

#ifndef RPN_TDD_CALCULATOR_H
#define RPN_TDD_CALCULATOR_H

#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <stack>
#include <algorithm>
#include <iterator>

#include "math_factory.h"

class calculator {

    private:
        std::string strMathOperators;
        bool isMathOperator(std::string);

    public:
        calculator();
        double evaluate (std::string);

};

#endif //RPN_TDD_CALCULATOR_H
