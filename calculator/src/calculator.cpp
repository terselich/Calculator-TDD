//
// Created by terselich on 4/15/20.
//

#include "../include/calculator.h"

calculator::calculator() {
    strMathOperators = "+-*/";
}

bool calculator::isMathOperator(std::string strMathOperator) {
    return strMathOperators.find(strMathOperator) != std::string::npos;
}

double calculator::evaluate(std::string rpnMathExpression ) {

    math_operator *pMathOperator = math_factory::getMathObject();
    double firstNumber, secondNumber, result;
    std::stack<double> numberStack;

    std::stringstream rpnMathTokens(rpnMathExpression);
    std::istream_iterator<std::string> begin(rpnMathTokens);
    std::istream_iterator<std::string> end;

    std::vector<std::string> rpnTokens( begin, end );
    std::vector<std::string>::iterator pos = rpnTokens.begin();

    while (pos != rpnTokens.end()) {

        if ( isMathOperator( *pos ) ) {
            secondNumber = numberStack.top();
            numberStack.pop();
            firstNumber = numberStack.top();
            numberStack.pop();

            pMathOperator = math_factory::getMathObject ( *pos );
            result = pMathOperator->evaluate ( firstNumber, secondNumber );
            numberStack.push ( result );
        }
        else
            numberStack.push(stod(*pos));
        ++pos;
    }

    result = numberStack.top();
    return result;
}