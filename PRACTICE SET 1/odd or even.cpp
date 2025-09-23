#include <iostream>
int main()
{
    int number;

    std::cout << " "
              << std::endl;

    std::cout << "Enter your number! ";
    std::cin >> number;

    std::cout << " "
              << std::endl;

    if (number % 2 == 0)
    {
        std::cout << number << " is an even number!" << std::endl;
    }
    else
    {
        std::cout << number << " is an odd number!" << std::endl;
    }

    std::cout << " "
              << std::endl;
}