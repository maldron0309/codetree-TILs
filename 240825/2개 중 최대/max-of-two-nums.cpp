#include <iostream>

int main()
{
    int a{}, b{};
    std::cin >> a >> b;
    
    int max = (a > b) ? a : b;
    std::cout << max;

    return 0;
}