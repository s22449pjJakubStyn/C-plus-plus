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
    char z       = '*';
    auto const a = ask_user_for_integer("a=");
    auto const b = ask_user_for_integer("b=");
    if (a < 2 || b < 2) {
        std::cout << "Wrong input (minimal size is 2!" << std::endl;
        return 1;
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            std::cout << z;
        }
        std::cout << std::endl;
    }
    return 0;
}
