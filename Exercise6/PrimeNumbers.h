#pragma once
#include <vector>
#include <list>

class PrimeNumbers
{
public:
	std::vector<int> FindPrimeNumbers();
	void createListOfNumbers();
	bool isPrimeNumber(int n);
	void printListOfNumbers(std::vector<int> list);
	static std::vector<int> listOfNumbers;
	static std::vector<int> listOfPrimeNumbers;
	static std::vector<int> listOfNoPrimeNumbers;
};