/*TODO:
Napisz funkcje, ktora przyjmie dwa stringi i zwroci ile liter maj¹ wspolnych.
*/

#include <iostream>
#include <string>

int sameLetters(std::string first, std::string second)
{
    int sameLettersCounter = 0;
    for (auto it = first.begin(); it != first.end(); ++it)
    {
        for (auto it2 = second.begin(); it2 != second.end(); ++it2)
        {
            if (*it == *it2)
            {
                sameLettersCounter++;
            }
        }
    }
    return sameLettersCounter;
}

int main()
{
    std::string firstStr = "Malezja";
    std::string secondStr = "Indonezja";
    std::cout << sameLetters(firstStr, secondStr);
}