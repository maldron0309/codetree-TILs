#include <iostream>

int main() 
{
    int a{};
    std::cin >> a;

    if (a % 3 == 0)
    {
        std::cout << "YES\n";
    }
    else 
    {
        std::cout << "NO\n";
    }

    if (a % 5 == 0)
    {
        std::cout << "YES\n";
    }
    else 
    {
        std::cout << "NO\n";
    }

    return 0;
}