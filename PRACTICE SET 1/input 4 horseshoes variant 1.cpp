#include <iostream>

int main()
{
    int horseshoe1, horseshoe2, horseshoe3, horseshoe4;
    int UniqueHorseshoes, amountToBuy;

    std::cin >> horseshoe1 >> horseshoe2 >> horseshoe3 >> horseshoe4;

    UniqueHorseshoes = (horseshoe1 != horseshoe2 && horseshoe1 != horseshoe3 && horseshoe1 != horseshoe4) +
                       (horseshoe2 != horseshoe3 && horseshoe2 != horseshoe4) +
                       (horseshoe3 != horseshoe4);

    amountToBuy = 4 - (UniqueHorseshoes + 1);

    std::cout << amountToBuy
              << std::endl;
    std::cout << " " << std::endl;

    return 0;
}