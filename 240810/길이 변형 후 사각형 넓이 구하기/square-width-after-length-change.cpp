#include <iostream>

int main()
{
    int width{}, height{}, area{};
    std::cin >> width >> height;

    width += 8;
    height *= 3;

    area = (width * height);

    std::cout << width << '\n' << height << '\n' << area;

    return 0;
}