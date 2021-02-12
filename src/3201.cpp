#include <iostream>
#include <string>

auto main() -> int
{
    const char* hello_world = "Hello World!";
    std::cout << "Adres zmiennej hello_world: " << &hello_world << std::endl;
    return 0;
}
