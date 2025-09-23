#include <iostream>
int main()
{
    int num1, num2;

    std::cout << " "
              << std::endl;

    std::cout << "Enter First number! ";
    std::cin >> num1;

    std::cout << "Enter Second number! ";
    std::cin >> num2;

    std::cout << " "
              << std::endl;
    int sum = num1 + num2;
    std::cout << "the sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;
    std::cout << " "
              << std::endl;
}