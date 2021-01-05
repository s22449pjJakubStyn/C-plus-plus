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
    auto const limit    = ask_user_for_integer("limit=");
    auto const dzielnik = ask_user_for_integer("dzielnik=");
    if (dzielnik == 0) {
        std::cout << "Don't divide by 0!" << std::endl;

        return 1;
    }
    int sum = 0;
    for (auto i = limit; 1 <= i; i--) {
        if (i % dzielnik == 0) {
            sum = sum + i;
        }
    }
    std::cout << "Sum=" << sum << std::endl;
    return 0;
}
