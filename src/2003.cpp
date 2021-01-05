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
    do {
        auto const a = ask_user_for_integer("a=");
        auto const b = ask_user_for_integer("b=");
        auto const s = ask_user_for_integer("s=");
        if (s == 0) {
            std::cout << "s' value can't be 0!" << std::endl;

            return 1;
        } else if (s < 0 && a > b) {
            for (auto i = a; i > b; i = (i + s)) {
                std::cout << i << std::endl;
            }
        } else if (s > 0 && a < b) {
            for (auto i = a; i < b; i = (i + s)) {
                std::cout << i << std::endl;
            }
        } else {
            std::cout << "Wrong input!" << std::endl;
            return 1;
        }
    } while (true);
    return 0;
}
