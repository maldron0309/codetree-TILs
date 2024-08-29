#include <iostream>

int main()
{
    int aMath{}, aEng{};
    int bMath{}, bEng{};
    std::cin >> aMath >> aEng >> bMath >> bEng;

    char student = (aMath > bMath || (aMath == bMath && aEng > bEng)) ? 'A' : 'B';

    std::cout << student;

    return 0;
}