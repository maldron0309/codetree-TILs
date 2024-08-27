#include <iostream>

int main() 
{
    int a{}, b{}, c{};
    std::cin >> a >> b >> c;

    int value = (a < b && b < c) ? 1:0;

    std::cout << value;
    
    return 0;
}