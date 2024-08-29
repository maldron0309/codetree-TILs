#include <iostream>

int main() 
{
    int m{}, f{};

    if (m >= 90)
    {
        if (100 >= f && f >= 95)
        {
            std::cout << 100000;
        }
        else if (f > 90)
        {
            std::cout << 50000;
        }
    }
    else 
    {
        std::cout << 0;
    }
    
    return 0;
}