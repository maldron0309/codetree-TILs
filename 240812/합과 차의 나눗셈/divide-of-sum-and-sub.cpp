#include <iostream>
#include <iomanip>

int main()
{
    double a{}, b{};
    std::cin >> a >> b;

    std::cout << std::fixed << std::setprecision(2) << (a + b) / (a - b);

    return 0;
}