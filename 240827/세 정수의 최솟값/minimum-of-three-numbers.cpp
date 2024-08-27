#include <iostream>

int main() 
{
    int a{}, b{}, c{};
    std::cin >> a >> b >> c;

    int minValue = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    std::cout << minValue;

    return 0;
}