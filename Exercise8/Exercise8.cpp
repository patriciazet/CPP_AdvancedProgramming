/*TODO:
Klasy: Rectangle(przechowuje d³ugoœci boków, wylicza pole, isSquare()), RectangleGenerator(Klasa genreuj¹ca losowy prostok¹t o boku z podanego przedzia³u), RectangleManger(tutaj faktycznie implementujemy zadania)
Utwórz wektor 100 prostok¹tów o losowych d³ugoœciach boków z przedzia³u 0, 10 (u¿yj liczb ca³kowitych)
a) void printRectangles() - Wypisz wszystkie prostok¹ty (for_each + unary function) - funckcja void printRectange(Rectangle)
b) size_t countRectangleBiggerThen(int area ) - Wypisz ile jest prostok¹tów o polu wiêkszym ni¿ 50 (count_if)
c) std::vector copyRectangles() - Przekopiuj wszystkie prostk¹ty, które s¹ kwadratami do drugiego vectora (copy_if) i go wypisz (for_each)
d) void sortAreaDescending() - Posortuj vector prostok¹tów malejaco wed³ug pola powierzchni
e) void deleteInvalid() Usuñ wszystkie prostok¹ty, które maj¹ przynajmniej jeden bok równy 0
7:04
class RectangleManager
{
RectangleManager(int howMany)
{
    RectangleGenerator rectGen(0,10);
    rectVect.push_back(rectGen.generateRect());
}
private:
std::vecotr<Rectangle> rectVect;
}
*/

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
