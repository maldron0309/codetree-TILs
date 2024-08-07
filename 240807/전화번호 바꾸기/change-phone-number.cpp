#include <iostream>
#include <string>

int main() 
{
    std::string phoneNumber;
    std::getline(std::cin, phoneNumber);
    
    std::cout << phoneNumber.substr(0, 4) 
              << phoneNumber.substr(9, 4) << "-" 
              << phoneNumber.substr(4, 4) << '\n';
    
    return 0;
}