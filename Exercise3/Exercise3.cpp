#include <iostream>
#include "StringConverter.h"

int main()
{
    std::string camelString = "camelHasTwoHumps";
    std::string snakeString = "snake_has_no_legs";
    StringConverter converter;
    std::cout << converter.toSnakeCase(camelString) << std::endl;
    std::cout << converter.toCamelCase(snakeString) << std::endl;
}