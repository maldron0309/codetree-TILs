#include <iostream>

int main()
{
    int h{}, m{};
    std::cin >> h;

    std::cin.get();
    std::cin >> m;
    
    std::cout << (h + 1) << ":" << m;
    return 0;
}