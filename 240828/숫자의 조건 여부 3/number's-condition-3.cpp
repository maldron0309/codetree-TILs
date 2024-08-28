#include <iostream>

int main() 
{
    int a{};
    std::cin >> a;

    std::string str = ((a % 13 == 0) || (a % 19 == 0)) ? "True":"False";
    std::cout << str;

    return 0;
}