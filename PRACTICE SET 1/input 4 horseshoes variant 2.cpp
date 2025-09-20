#include <iostream>

int main()
{
    int horseshoe1, horseshoe2, horseshoe3, horseshoe4;
    int UniqueHorseshoes, amountToBuy;

    std::cout << "Enter first horseshoe:" << std::endl;
    std::cin >> horseshoe1;

    std::cout << "Enter second horseshoe:" << std::endl;
    std::cin >> horseshoe2;

    std::cout << "Enter third horseshoe:" << std::endl;
    std::cin >> horseshoe3;

    std::cout << "Enter fourth horseshoe:" << std::endl;
    std::cin >> horseshoe4;

    UniqueHorseshoes = (horseshoe1 != horseshoe2 && horseshoe1 != horseshoe3 && horseshoe1 != horseshoe4) +
                       (horseshoe2 != horseshoe3 && horseshoe2 != horseshoe4) +
                       (horseshoe3 != horseshoe4);

    amountToBuy = 4 - (UniqueHorseshoes + 1);

    std::cout << " "
              << std::endl;
    std::cout << "The amount of unique horseshoes to buy is/are " << amountToBuy << "!" << std::endl;
    std::cout << " "
              << std::endl;

    return 0;
}