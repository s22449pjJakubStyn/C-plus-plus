#include <iostream>
#include <string>
int main()
{
    std::cout << "Size in bites:" << std::endl;
    std::cout << "Size of std::string = " << sizeof(std::string) << std::endl;
    std::cout << "Size of int* = " << sizeof(int*) << std::endl;
    std::cout << "Size of unsigned short* (uint16_t*) = "
              << sizeof(unsigned short*) << std::endl;
    std::cout << "Size of char* = " << sizeof(char*) << std::endl;
    return 0;
}
// napisać komentarz
