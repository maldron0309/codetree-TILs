#include <iostream>

int main()
{
    int a{};
    std::cin >> a;

    a = ((a % 3 == 0) || (a % 5 == 0)) ? 1:0;
    std::cout << a;

    return 0;
}