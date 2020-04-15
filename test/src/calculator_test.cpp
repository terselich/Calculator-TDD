//
// Created by terselich on 4/15/20.
//

#include "../include/calculator_test.h"


TEST(RPNCalculatorTest, testSimpleAddition) {

    calculator calc;

    double expectedResult = 25.0;
    double actualResult = calc.evaluate("10 15 +");

    ASSERT_EQ ( expectedResult, actualResult );

}

TEST(RPNCalculatorTest, testSimpleSubtraction) {

    calculator calc;

    double expectedResult = 15.0;
    double actualResult = calc.evaluate("25 10 -");

    ASSERT_EQ ( expectedResult, actualResult );

}

TEST(RPNCalculatorTest, testSimpleMultiplication) {

    calculator calc;

    double expectedResult = 250.0;
    double actualResult = calc.evaluate("25 10 *");

    ASSERT_EQ ( expectedResult, actualResult );

}

TEST(RPNCalculatorTest, testSimpleDivision) {

    calculator calc;
    double expectedResult = 25.0;
    double actualResult = calc.evaluate("250 10 /");

    ASSERT_EQ ( expectedResult, actualResult );

}

TEST(RPNCalculatorTest, testComplexRPNExpression) {

    calculator calc;

    double expectedResult = 2.33333;
    double actualResult = calc.evaluate("2 5 * 4 + 7 2 - 1 + /");

    ASSERT_NEAR( expectedResult, actualResult, 4 );

}
