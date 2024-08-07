#include <iostream>
#include <iomanip>
int main() 
{
    double a{};
    std::cin >> a;
    std::cout << std::fixed << std::setprecision(2) << (a + 1.5);
    return 0;
}