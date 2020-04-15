//
// Created by terselich on 4/15/20.
//

#include "../include/math_factory.h"

std::unique_ptr<std::map<std::string, math_operator*>> math_factory::static_init_block() {
    auto pStringToMathObjectMap =
                        std::make_unique<std::map<std::string, math_operator*>>(
                                std::map<std::string, math_operator*>()
                                        );

    pStringToMathObjectMap->insert(std::make_pair("+",new addition()));
    pStringToMathObjectMap->insert(std::make_pair("-",new subtraction()));
    pStringToMathObjectMap->insert(std::make_pair("*",new multiplication()));
    pStringToMathObjectMap->insert(std::make_pair("/",new division()));

    return pStringToMathObjectMap;
}

std::unique_ptr<std::map<std::string, math_operator*>> math_factory::pStringToMathObjectMap =
        static_init_block();

math_operator* math_factory::getMathObject (std::string typeOfMathObjectRequired )
{

    return pStringToMathObjectMap->find( typeOfMathObjectRequired )->second;

}
