/*TODO:
Napisz funkcje, ktora odwroci podanego stringa.
*/

#include <iostream>
#include <string>


std::string reverseString(std::string sentence)
{
    std::string reversed = std::string(sentence.rbegin(), sentence.rend());
    return reversed;
}

int main()
{
    std::string sentence = "Alea iacta est";
    std::cout << reverseString(sentence);
}