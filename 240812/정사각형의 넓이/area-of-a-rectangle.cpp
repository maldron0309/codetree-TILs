#include <iostream>

int main()
{
    int n{}, area{};
    std::cin >> n;

    area = (n * n);

    if (n < 5) std::cout << "tiny";
    else std::cout << area;

    return 0;
}