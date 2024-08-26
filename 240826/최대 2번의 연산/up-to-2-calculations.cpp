#include <iostream>

int main() 
{
    int a{};
    std::cin >> a;

    if (a % 2 == 0) 
    {
        a = (a / 2);
    }
    if (a % 2 != 0)
    {
        a = (a + 2) / 2;
    }

    std::cout << a;

    return 0;
}