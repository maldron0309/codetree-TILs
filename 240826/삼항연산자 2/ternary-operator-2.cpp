#include <iostream>

int main()
{
    int a{};
    std::cin >> a;

    std::string result = (a == 1) ? "t" : "f";

    std::cout << result;

    return 0;
}