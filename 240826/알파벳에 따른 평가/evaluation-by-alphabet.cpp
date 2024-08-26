#include <iostream>

int main()
{
    char c{};
    std::cin >> c;

    switch(c)
    {
        case 'S':
            std::cout << "Superior";
            break;
        case 'A':
            std::cout << "Excellent";
            break;
        case 'B':
            std::cout << "Good";
            break;
        case 'C':
            std::cout << "Usually";
            break;
        case 'D':
            std::cout << "Effort";
            break;
        default:
            std::cout << "Failure";
            break;
    }

    return 0;
}