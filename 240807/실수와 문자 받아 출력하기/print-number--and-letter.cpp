#include <iostream>
#include <iomanip>

int main()
{
    char c{};
    double a{}, b{};

    std::cin >> c >> a >> b;
    std::cout << std::fixed << std::setprecision(2) << c << '\n' << a << '\n' << b;

    return 0;
}