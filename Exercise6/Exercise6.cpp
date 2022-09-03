/*TODO:
Stworz listê liczb od 1 do 1000. Rozdziel te liczby na dwie osobne listy: liczby pierwsze i nie liczby pierwsze.
*/

#include <iostream>
#include "PrimeNumbers.h"

int main()
{
    PrimeNumbers numbers;
    numbers.createListOfNumbers();
    numbers.FindPrimeNumbers();
    numbers.printListOfNumbers(PrimeNumbers::listOfPrimeNumbers);
    numbers.printListOfNumbers(PrimeNumbers::listOfNoPrimeNumbers);
}