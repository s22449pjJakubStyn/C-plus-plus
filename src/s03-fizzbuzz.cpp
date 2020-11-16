#include <iostream>
#include <string>
auto main(int, char* argv[]) -> int
{
    auto const n = std::stoi(argv[1]);

    for (int i = 1; i <= n; ++i) {
        std::cout << i << ", ";
    }
    std::cout << "\n"
              << "\n";
    int i = 1;

    while (i <= n) {
        std::string wynik = "";
        std::string test1 = "";
        std::string test2 = "";

        if (i % 3 == 0) {
            test1 = "fizz";
        }
        if (i % 5 == 0) {
            test2 = "buzz";
        }
        if (i % 3 != 0 && i % 5 != 0) {
            wynik = "niepodzielna przez 3 ani 5";
        }
        std::cout << i << ": " << test1 << test2 << wynik << std::endl;
        ++i;
    }

    return 0;
}
