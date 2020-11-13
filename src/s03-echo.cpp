#include <iostream>
#include <string>
auto main (int argc, char* argv[]) -> int
{
    if (argc == 0) {
        return 1;
    }

    int i = 0;
    while ( i <= argc) {
        std::cout << "\n" << argv[i] << ", " << std::endl;
        ++i;
    }
    
    return 0;
} 

