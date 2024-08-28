#include <iostream>

int main()
{
    int month{};
    std::cin >> month;
    
    if (month >= 3 && month <= 5 )
    {
        std::cout << "Spring";
    }
    else if (month >= 6 && month <= 8 )
    {
        std::cout << "Summer";
    }
    else if (month >= 9 && month <= 11 )
    {
        std::cout << "Fall";
    }
    else
    {
        std::cout << "Winter";
    }

    return 0;
}