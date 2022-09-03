#include "PrimeNumbers.h"
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

std::vector<int> PrimeNumbers::listOfNumbers = {};
std::vector<int> PrimeNumbers::listOfPrimeNumbers = {};
std::vector<int> PrimeNumbers::listOfNoPrimeNumbers = {};

std::vector<int> PrimeNumbers::FindPrimeNumbers()
{
	auto findPrimeNums = [&](int number)
	{
		if (isPrimeNumber(number) == true)
		{
			listOfNoPrimeNumbers.push_back(number);
		}
		else
		{
			listOfPrimeNumbers.push_back(number);
		}
	};
	for_each(listOfNumbers.begin(), listOfNumbers.end(), findPrimeNums);

	return listOfPrimeNumbers;
}

void PrimeNumbers::createListOfNumbers()
{
	for (unsigned int i = 1; i <= 1000; ++i)
	{
		listOfNumbers.push_back(i);
	}
}

bool PrimeNumbers::isPrimeNumber(int n)
{
	for (unsigned int i = 2; i <= n / 2; ++i)
	{
		if (n % i == 0)
		{
			return true;
		}
	}
	return false;
}

void PrimeNumbers::printListOfNumbers(std::vector<int> list)
{
	for (auto x : list)
	{
		std::cout << x << ", ";
	}
	std::cout << std::endl;
}
