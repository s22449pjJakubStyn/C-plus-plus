#include <iostream>

auto iota(int a[], int n, int start) -> void
{
    start = 5;
    a[n]  = {start};
    std::cout << "Twoja tablica a o rozmiarze n równej " << n
              << " ma wartości równe:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << start++ << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int start   = 5;
    const int n = 10;
    int a[n]    = {start};
    iota(a, n, start);
    return 0;
}
