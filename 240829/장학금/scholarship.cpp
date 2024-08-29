#include <iostream>

int main() 
{
    int m{}, f{};
    std::cin >> m >> f;

    int money{};

    if (m >= 90)
    {
        if (100 >= f && f >= 95)
        {
            money = 100000;
        }
        else if (f >= 90)
        {
            money = 50000;
        }
    }

    std::cout << money;
    
    return 0;
}