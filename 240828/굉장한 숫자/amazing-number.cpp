#include <iostream>

int main()
{
    int n{};
    std::cin >> n;

    std::string str = ((n % 3 == 0) && (n % 5 == 0)) ? "true":"false";
    std::cout << str;

    return 0;
}