#include <iostream>

int main() 
{
    int age{}, age1{};
    char gender{}, gender1{};
    std::cin >> age >> age1;
    std::cin >> gender >> gender1;

    int result = ((age >= 19 && gender == 'M') || (age1 >= 19 && gender1 == 'M')) ? 1:0;

    std::cout << result;

    return 0;
}