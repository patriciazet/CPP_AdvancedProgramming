/*TODO:
Klasy: Rectangle(przechowuje d�ugo�ci bok�w, wylicza pole, isSquare()), RectangleGenerator(Klasa genreuj�ca losowy prostok�t o boku z podanego przedzia�u), RectangleManger(tutaj faktycznie implementujemy zadania)
Utw�rz wektor 100 prostok�t�w o losowych d�ugo�ciach bok�w z przedzia�u 0, 10 (u�yj liczb ca�kowitych)
a) void printRectangles() - Wypisz wszystkie prostok�ty (for_each + unary function) - funckcja void printRectange(Rectangle)
b) size_t countRectangleBiggerThen(int area ) - Wypisz ile jest prostok�t�w o polu wi�kszym ni� 50 (count_if)
c) std::vector copyRectangles() - Przekopiuj wszystkie prostk�ty, kt�re s� kwadratami do drugiego vectora (copy_if) i go wypisz (for_each)
d) void sortAreaDescending() - Posortuj vector prostok�t�w malejaco wed�ug pola powierzchni
e) void deleteInvalid() Usu� wszystkie prostok�ty, kt�re maj� przynajmniej jeden bok r�wny 0
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
