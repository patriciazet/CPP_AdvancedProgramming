<<<<<<< HEAD
#include <iostream>
#include <string>
#include "StringConverter.h"
#include <algorithm>

std::string StringConverter::toCamelCase(std::string snakeString)
{
	std::string camelString;
	for (auto it = snakeString.begin(); it != snakeString.end(); ++it)
	{
		if (it != snakeString.begin() && isFloor(*(it - 1)))
		{
			char letter = changeToBig(*it);
			camelString.push_back(letter);
		}
		else if (!isFloor(*it))
		{
			camelString.push_back(*it);
		}
	}
	return camelString;
}

std::string StringConverter::toSnakeCase(std::string camelString)
{
	std::string snakeString;
	for (auto it = camelString.begin(); it != camelString.end(); ++it)
	{
		if (isBigLetter(*it))
		{
			snakeString.push_back('_');
			char letter = changeToSmall(*it);
			snakeString.push_back(letter);
		}
		else
		{
			snakeString.push_back(*it);
		}
	}
	return snakeString;
}

bool StringConverter::isBigLetter(char& c)
{
	return (c >= 65 && c <= 90);
}

char StringConverter::changeToSmall(char& c)
{
	return std::tolower(c);
}

char StringConverter::changeToBig(char& c)
{
	return std::toupper(c);
}

bool StringConverter::isFloor(char& c)
{
	return c == 95;
=======
#include <iostream>
#include <string>
#include "StringConverter.h"
#include <algorithm>

std::string StringConverter::toCamelCase(std::string snakeString)
{
	std::string camelString;
	for (auto it = snakeString.begin(); it != snakeString.end(); ++it)
	{
		if (it != snakeString.begin() && isFloor(*(it - 1)))
		{
			char letter = changeToBig(*it);
			camelString.push_back(letter);
		}
		else if (!isFloor(*it))
		{
			camelString.push_back(*it);
		}
	}
	return camelString;
}

std::string StringConverter::toSnakeCase(std::string camelString)
{
	std::string snakeString;
	for (auto it = camelString.begin(); it != camelString.end(); ++it)
	{
		if (isBigLetter(*it))
		{
			snakeString.push_back('_');
			char letter = changeToSmall(*it);
			snakeString.push_back(letter);
		}
		else
		{
			snakeString.push_back(*it);
		}
	}
	return snakeString;
}

bool StringConverter::isBigLetter(char& c)
{
	return (c >= 65 && c <= 90);
}

char StringConverter::changeToSmall(char& c)
{
	return std::tolower(c);
}

char StringConverter::changeToBig(char& c)
{
	return std::toupper(c);
}

bool StringConverter::isFloor(char& c)
{
	return c == 95;
>>>>>>> 01090dda6cb5a928242bf422d022266669efd237
}