#include <iostream>

int main()
 {
    int m{};
    std::cin >> m;

    if (m >= 3 && m <= 5)
    {
        std::cout << "Spring";
    }
    else if (m >= 6 && m <= 8) 
    {
        std::cout << "Summer";
    }
    else if (m >= 9 && m <= 11)
    {
        std::cout << "Fall";
    } 
    else
    {
        std::cout << "Winter";
    }

    return 0;
}