#include <iostream>

int main() 
{
    int a{};
    std::cin >> a;

    std::string str = ((a > 20) || (a < 10)) ? "yes":"no"; 

    std::cout << str;

    return 0;
}