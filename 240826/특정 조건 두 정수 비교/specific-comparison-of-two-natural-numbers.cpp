#include <iostream>

int main()
{
    int a{}, b{};
    std::cin >> a >> b;

    if (a <= b)
    {
        std::cout << 1 << " ";
    }
    else 
    {
        std::cout << 0 << " ";
    }

    if (a == b)
    {
        std::cout << 1 << " ";
    }
    else 
    {
        std::cout << 0 << " ";
    }


    return 0;
}