#include <iostream>

int main()
{
    double eyes{};
    std::cin >> eyes;

    if (eyes >= 1.0)
    {
        std::cout << "High";
    }
    else if (eyes >= 0.5)
    {
        std::cout << "Middle";
    }
    else 
    {
        std::cout << "Low";
    }

    return 0;
}