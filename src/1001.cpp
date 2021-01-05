/*#include <iostream>
#include <string>

auto main (int argc, char* argv[]) -> int
{
    if (argc == 0) {
        return 1;
    }

    auto const name = std::string{argv[1]};
    auto const surname = std::string{argv[2]};
    std::cout << "Hello " << name << " " << surname <<"!\n";
    return 0;
}*/
/*#include <iostream>
#include <string>


auto ask_user_for_integer(std::string const prompt) -> int
{
    if (not prompt.empty ()) {
        std::cout << prompt;
    }
    return 0;
}
auto main () -> int
{
    auto a = std::string{};
    std::getline(std::cin, a);
    auto b = std::string{};
    std::getline(std::cin, b);

    std::cout << "Hello " << a << " " << b <<"!\n";
    return 0;
}*/
#include <iostream>
auto main() -> int
{
    std::cout << "Hello Jakub Styn!\n";
    return 0;
}
