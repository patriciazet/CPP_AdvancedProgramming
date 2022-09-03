/*TODO:
Klasa: StringCensor
Napisz klase ktora bedzie cenzurowac podane stringi (zamieniac wymagane litery na gwiazke), operacje ktora ma wspierac ta klasa:
- addCensoredLetter(char c)
- std::string censor(std::string)
*/

#include <iostream>
#include "StringCensor.h"
#include <string>

int main()
{
    StringCensor stringCensor;
    stringCensor.addCensoredLetter('a');
    stringCensor.addCensoredLetter('i');
    stringCensor.addCensoredLetter('e');

    std::string sentence = "Alea iacta est";
    std::cout << stringCensor.censor(sentence) << std::endl;
}

