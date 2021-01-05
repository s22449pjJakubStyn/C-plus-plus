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
    auto const c = ask_user_for_integer("c=");
    if (a > b && a > c) {
        std::cout << "The largest number is:" << a << std::endl;
    } else if (b > a && b > c) {
        std::cout << "The largest number is:" << b << std::endl;
    } else if (c > a && c > b) {
        std::cout << "The largest number is:" << c << std::endl;
    } else if (a == c && b == c) {
        std::cout << "All numbers are equal" << std::endl;
    } else if (a == b && a < c) {
        std::cout << "a number and b number are equal so" << c
                  << "is the largest" << std::endl;
    } else if (a == c && a < b) {
        std::cout << "a number and c number are equal so" << b
                  << "is the largest" << std::endl;
    } else if (b == c && b < a) {
        std::cout << "b number and c number are equal so" << a
                  << "is the largest" << std::endl;
    }
    return 0;
}
