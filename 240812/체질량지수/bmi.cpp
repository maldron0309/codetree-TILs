#include <iostream>
#include <cmath>

int main() 
{
    int h{}, w{};
    std::cin >> h >> w;
    
    double bmi = w / std::pow((h / 100.0), 2);
    int bmiInt = static_cast<int>(bmi);
    
    std::cout << bmiInt << '\n';
    if (bmi >= 25) std::cout << "Obesity";
    
    return 0;
}