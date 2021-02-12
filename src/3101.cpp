#include <iostream>

void init(int a[], int n)
{
    a[n] = {};
    std::cout << "Twoja tablica a o rozmiarze n równej " << n
              << " ma wartości równe:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << ", ";
    }
    std::cout << std::endl;
}

int main()
{
    const int n = 3;
    int a[n]    = {};
    init(a, n);
    return 0;
}
