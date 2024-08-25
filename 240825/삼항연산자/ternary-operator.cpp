#include <iostream>

int main()
{
    int score{};
    std::cin >> score;

    std::string result = (score == 100) ? "pass" : "failure";

    std::cout << result;

    return 0;
}