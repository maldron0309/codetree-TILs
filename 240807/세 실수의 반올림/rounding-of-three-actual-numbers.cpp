#include <iostream>
#include <iomanip>

int main()
{
    double a{}, b{}, c{};
    std::cin >> a >> b >> c;
    std::cout << std::fixed << std::setprecision(3) << a << '\n' << b << '\n' << c << '\n';
    return 0;
}