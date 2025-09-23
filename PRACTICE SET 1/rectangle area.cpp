#include <iostream>
int main()
{
    std::cout << " "
              << std::endl;

    int length, width;

    std::cout << "Enter Length! ";
    std::cin >> length;

    std::cout << "Enter Width! ";
    std::cin >> width;

    int areaRectangle = length * width;

    std::cout << " "
              << std::endl;

    std::cout << "The area of a rectangle with a length of " << length << " and a width of " << width << " is: " << areaRectangle << "!" << std::endl;

    std::cout << " "
              << std::endl;
}