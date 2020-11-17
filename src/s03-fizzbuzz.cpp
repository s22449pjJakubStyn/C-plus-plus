#include <iostream>
#include <string>
auto main(int, char* argv[]) -> int
{
    auto const n = std::stoi(argv[1]);
    auto i       = int{1};
    auto test1   = std::string{};
    std::cout << "\n";

    while (i <= n) {
        std::string test_fizz = "";
        std::string test_buzz = "";

        if (i % 3 == 0) {
            test_fizz = "fizz";
        }
        if (i % 5 == 0) {
            test_buzz = "buzz";
        }
        std::cout << i << ": " << test_fizz << test_buzz << std::endl;
        ++i;
    }

    return 0;
}
