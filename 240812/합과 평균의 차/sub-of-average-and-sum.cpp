#include <iostream>

int main() 
{
    int a{}, b{}, c{}, sum{}, avg{};
    std::cin >> a >> b >> c;

    sum = (a + b + c);
    avg = (a + b + c) / 3;

    std::cout << sum << '\n' << avg << '\n' << (sum - avg);
    return 0;
}