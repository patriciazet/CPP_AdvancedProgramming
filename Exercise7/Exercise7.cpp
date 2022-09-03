/*TODO:
Stworz liste 50 liczb calkowitych dodatnich i wypelnij ja losowymi wartosciami. Wypisz ja.
Nastepnie posortuj i wypisz liste tak, by na poczatku znalazly sie wartosci parzyste uporzadkowane rosnaco, 
a za nimi wartosci nieparzyste uporzadkowane malejaco.
Podpowiedz: Podziel liste na dwie osobne, odpowiednio posortuj, a nastepnie ja polacz w jedna.
*/

#include <iostream>
#include <vector>
#include <random>

std::vector<int> generateList()
{
    std::random_device device;
    std::default_random_engine engine(device());

    std::uniform_int_distribution<int> distribution(1, 50);

    std::vector<int> numbersList;

    for (unsigned int i = 0; i <= 50; ++i)
    {
        numbersList.push_back(distribution(engine));
    }

    return numbersList;
}

std::vector<int> addLists(std::vector<int> list1, std::vector<int> list2)
{
    std::vector<int> newList;
    std::copy(list1.begin(), list1.end(), std::back_inserter(newList));
    std::copy(list2.begin(), list2.end(), std::back_inserter(newList));

    return newList;
}

std::vector<int> sortList(std::vector<int> list)
{
    std::vector<int> evenNumbers;
    std::vector<int> oddNumbers;
    std::vector<int> sortedVector;

    for (auto it = list.begin(); it != list.end(); ++it)
    {
        if ((*it) % 2 == 0)
        {
            evenNumbers.push_back(*it);
        }
        else
        {
            oddNumbers.push_back(*it);
        }
    }

    std::sort(evenNumbers.begin(), evenNumbers.end());
    std::sort(oddNumbers.begin(), oddNumbers.end(), std::greater<int>());

    sortedVector = addLists(evenNumbers, oddNumbers);

    return sortedVector;
}

void printListOfNumbers(std::vector<int> list)
{
    for (auto num : list)
    {
        std::cout << num << "; ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> sortedList;
    std::vector<int> listOfNumbers = generateList();
    printListOfNumbers(listOfNumbers);
    sortedList = sortList(listOfNumbers);
    printListOfNumbers(sortedList);
}

