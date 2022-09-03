#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


const char star = '*';

class StringCensor
{
	std::string _censoredLetters;
public:
	void addCensoredLetter(char c)
	{
		_censoredLetters += c;

	};

	std::string censor(std::string str)
	{
		std::replace_if(str.begin(), str.end(), [this](char c) {return std::string::npos != _censoredLetters.find(c); }, star);
		std::cout << str << std::endl;
		return str;
	};

	auto getAllCensoredLetters()
	{
		return _censoredLetters;
	}

};


