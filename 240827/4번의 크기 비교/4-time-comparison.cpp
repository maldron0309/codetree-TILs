#include <iostream>

int main() 
{
    int a{}, b{}, c{}, d{}, e{};
    std::cin >> a >> b >> c >> d >> e;

    if (a > b) std::cout << 1 << '\n';
    else std::cout << 0 << '\n';

    if (a > c) std::cout << 1 << '\n';
    else std::cout << 0 << '\n';

    if (a > d) std::cout << 1 << '\n';
    else std::cout << 0 << '\n';

    if (a > e) std::cout << 1 << '\n';
    else std::cout << 0 << '\n';


    return 0;
}