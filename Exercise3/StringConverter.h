#pragma once
#include <string>

class StringConverter
{
public:
	static std::string toCamelCase(std::string);
	static std::string toSnakeCase(std::string);
	static bool isBigLetter(char& c);
	static char changeToSmall(char& c);
	static char changeToBig(char& c);
	static bool isFloor(char& c);
};
