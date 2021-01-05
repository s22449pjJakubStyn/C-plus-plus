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
    auto a = ask_user_for_integer("a=");
    if (a < 0) {
        std::cout << "|a|=" << a * (-1) << std::endl;
    } else {
        std::cout << "|a|=" << a << std::endl;
    }
    return 0;
}
