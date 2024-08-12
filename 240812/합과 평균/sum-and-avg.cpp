#include <iostream>
#include <iomanip>

int main() 
{
    int a{}, b{};
    double avg{};
    std::cin >> a >> b;

    avg = (a + b) / 2.0;

    std::cout << std::fixed << std::setprecision(1) << (a + b) << " " << avg;

    return 0;
}