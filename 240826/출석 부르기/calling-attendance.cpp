#include <iostream>

int main() 
{
    int n{};
    std::cin >> n;

    switch(n)
    {
        case 1:
            std::cout << "John";
            break;
        case 2:
            std::cout << "Tom";
            break;
        case 3:
            std::cout << "Paul";
            break;
        default:
            std::cout << "Vacancy";
            break;
    }

    return 0;
}