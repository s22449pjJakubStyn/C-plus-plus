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

void swap(int* a, int* b)
{
    int first, second;

    first  = *a;
    second = *b;

    *a = second;
    *b = first;
}

auto main() -> int
{
    auto a = ask_user_for_integer("a=");
    auto b = ask_user_for_integer("b=");
    if (a == b) {
        std::cout << "Wrong input numbers have to be diffrence!" << std::endl;
        return 1;
    }

    std::cout << a << " " << b << std::endl;
    swap(&a, &b);
    std::cout << a << " " << b << std::endl;
    return 0;
}
