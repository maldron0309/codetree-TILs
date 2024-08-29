#include <iostream>

int main() 
{
    int age{}, age1{};
    char gender{}, gender1{};
    std::cin >> age >> gender >> age1 >> gender1;

    if ((age >= 19 && gender == 'M') || age1 >= 19 && gender1 == 'M')
    {
        std::cout << 1;
    }
    else
    {
        std::cout << 0;
    }

    return 0;
}