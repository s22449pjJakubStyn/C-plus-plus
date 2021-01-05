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
    auto const a = ask_user_for_integer("a=");
    auto const b = ask_user_for_integer("b=");
    for (auto i = a; i < b; ++i) {
        if (i > a) {
            std::cout << i << std::endl;
        } else if (i == a) {
            std::cout << i << std::endl;
        } else if (i < b) {
            std::cout << i << std::endl;
        }
    }
    return 0;
}
