/*#include <iostream>
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
        if (a<2) {
            std::cout << "a's value can't be less than 2!"<<std::endl;
        return 1;
        }
        for (int i=2;i<= a/2;i++) {
            if (a%i==0) {
                std::cout << "that isn't prime number" << std::endl;
            }
          else  {
            std::cout << "that is prime number" << std:: endl;
          }
        }
    return 0;
}*/
#include <iostream>
#include <string>

bool checkIfPrime(int a)
{
    bool isPrime = true;
    if (a < 2) {
        isPrime = false;
    } else {
        for (int i = 2; i <= a / 2; ++i) {
            if (a % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}

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
        int a        = ask_user_for_integer("a= ");
        bool isPrime = checkIfPrime(a);

        if (isPrime) {
            std::cout << a << " is prime number." << std::endl;
        } else {
            std::cout << a << " is not a prime number." << std::endl;
        }
    } while (true);
}
