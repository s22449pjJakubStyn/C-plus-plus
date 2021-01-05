#include <iostream>
#include <string>
auto ask_user_for_integer(std::string const prompt) -> int
{
    if (not prompt.empty()) {
        std::cout << prompt;
    }
    auto value = std::string{};
    std::getline(std::cin, value);
    return std::stoi(value);
}
auto main() -> int
{
    int silnia   = 1;
    int i        = 0;
    int x        = 1;
    auto const a = ask_user_for_integer("a=");
    if (a < 0) {
        std::cout
            << "The factorial can only be calculated from non-negative numbers!"
            << std::endl;
        return 1;
    }
    do {
        silnia = x * silnia;
        x++;
        i++;
    } while (i < a);
    std::cout << a << "!= " << silnia << std::endl;
    return 0;
}
