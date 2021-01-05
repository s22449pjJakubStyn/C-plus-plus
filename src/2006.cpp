/*#include <iostream>
#include <list>
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
void compare(int a, int b)
{
    if (a > b) {
        std::cout << a << ">" << b << std::endl;
    }
    else if (a < b) {
        std::cout << a << "<" << b << std::endl;
    }
    else if (a == b) {
        std::cout << a << "==" << b << std::endl;
    }
}
auto main() -> int
{
    auto const n = ask_user_for_integer("How many numbers do you want to
compare?:"); auto const a = ask_user_for_integer("What number do you want to
compare?:");

    int b;
    std::list<int> numbers;

    for (int i = 0; i < n; i++) {
        b = ask_user_for_integer("Enter number:");
        numbers.push_back(b);
    }

    for (int n : numbers)
    {
        compare(a, n);
    }
    return 0;
}*/
#include <iostream>
#include <list>
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
void compare(int a, int b)
{
    if (a > b) {
        std::cout << a << ">" << b << std::endl;
    } else if (a < b) {
        std::cout << a << "<" << b << std::endl;
    } else if (a == b) {
        std::cout << a << "==" << b << std::endl;
    }
}
auto main() -> int
{
    auto const n = ask_user_for_integer(
        "How many numbers do you want to compare (max 100)?:");
    auto const a = ask_user_for_integer("What number do you want to compare?:");

    int b;
    int tab[100];

    for (int i = 0; i < n; i++) {
        b      = ask_user_for_integer("Enter number:");
        tab[i] = b;
    }

    for (int i = 0; i < n; i++) {
        b = tab[i];
        compare(a, b);
    }
    return 0;
}
