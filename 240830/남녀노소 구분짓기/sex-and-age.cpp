#include <iostream>

int main() 
{
    int gender{}, age{};
    std::cin >> gender >> age;

    if (age >= 19)
    {
        std::cout << (gender == 0 ? "MAN" : "WOMAN");
    }
    else 
    {
        std::cout << (gender == 0 ? "BOY" : "GIRL");
    }

    return 0;
}