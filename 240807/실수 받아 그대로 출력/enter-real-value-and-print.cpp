#include <iostream>
#include <iomanip>

int main() 
{
    double n{};
    std::cin >> n;
    std::cout << std::fixed << std::setprecision(2) << n;
    return 0;
}