#include <iostream>

int main()
{
    int a{}, b{}, sum{};
    std::cin >> a >> b;

    sum = a ? b : sum;

    std::cout << sum;

    return 0;
}