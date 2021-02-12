#include <iostream>

auto amax(int a[], int n, int max) -> int
{
    a[n] = {};
    max  = a[0];
    std::cout << "Twoja tablica a o rozmiarze n równej " << n
              << " ma wartości równe:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << ", ";
    }
    std::cout << std::endl;
    std::cout << "A największą wartością tej tablicy jest:" << std::endl;
    for (int j = 0; j < n; j++) {
        if (max < a[j]) {
            max = a[j];
        }
    }
    std::cout << max << std::endl;
    return max;
}

int main()
{
    const int n = 5;
    int a[n]    = {3, 2, 1, 4, 5};
    int max     = a[0];
    amax(a, n, max);
    return 0;
}
