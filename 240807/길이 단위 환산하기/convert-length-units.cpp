#include <iostream>
#include <iomanip>

int main() 
{
    double ft{};
    double cm{};
    std::cin >> ft;

    cm = (ft * 30.48);
    std::cout << std::fixed << std::setprecision(1) << cm;

    return 0;
}