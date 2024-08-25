#include <iostream>

int main()
{
    int water{};
    std::cin >> water;

    if (water < 0)
    {
        std::cout << "ice";
    }
    else if (water > 100)
    {
        std::cout << "vapor";
    }
    else 
    {
        std::cout << "water";
    }

    return 0;
}