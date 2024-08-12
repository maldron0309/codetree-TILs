#include <iostream>

int main()
{
    int n{};
    std::cin >> n;

    std::cout << n << '\n';
    (n < 0) ? std::cout << "minus" : std::cout << '\n';

    return 0;
}