#include <iostream>

int main() 
{
    int aMath{}, aEng{};
    int bMath{}, bEng{};
    std::cin >> aMath >> aEng;
    std::cin >> bMath >> bEng;

    if (aMath > bMath && aEng > bEng)
    {
        std::cout << 1;
    }
    else 
    {
        std::cout << 0;
    }

    return 0;
}