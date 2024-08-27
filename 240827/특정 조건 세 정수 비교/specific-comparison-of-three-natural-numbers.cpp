#include <iostream>

int main()
{
    int a{}, b{}, c{};
    std::cin >> a >> b >> c;

    int min = (a <= b && a <= c) ? 1:0;
    int equal = (a == b && b == c) ? 1:0;

    std::cout << min << " " << equal;
    
    return 0;
}