#include <iostream>

int main()
{
    int d{}, m{}, y{};

    std::cin >> m;
    std::cin.get();
    std::cin >> d;
    std::cin.get();
    std::cin >> y;
    
    std::cout << y << "." << m << "." << d;
    return 0;
}