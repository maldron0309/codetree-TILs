#include <iostream>

int main()
{
    int n{}, area{};
    std::cin >> n;

    area = (n * n);

    std::cout << area << '\n';
    if (n < 5) std::cout << "tiny";

    return 0;
}