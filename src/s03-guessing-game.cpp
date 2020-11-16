#include <iostream>
#include <random>
#include <string>
auto ask_user_for_integer() -> int
{
    std::cout << "Wybierz liczbę od 1 do 100: ";
    auto n = std::string{};
    std::getline(std::cin, n);
    return std::stoi(n);
}
int main()
{
    std::random_device rd;
    std::uniform_int_distribution<int> test_liczba(1, 100);
    int correctAnswer = test_liczba(rd);

    while (true) {
        int zgadnij_liczbe = ask_user_for_integer();
        if (correctAnswer == zgadnij_liczbe) {
            std::cout << "just right" << std::endl;
            break;
        } else if (correctAnswer < zgadnij_liczbe) {
            std::cout << "too big" << std::endl;
        } else if (correctAnswer > zgadnij_liczbe) {
            std::cout << "too small" << std::endl;
        }
    }
    return 0;
}
