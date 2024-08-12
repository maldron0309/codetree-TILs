#include <iostream>

int main()
{
    int n{};
    std::cin >> n;

    if (n >= 80) std::cout << "pass";
    else std::cout << (n - 80) << " more score";

    return 0;
}