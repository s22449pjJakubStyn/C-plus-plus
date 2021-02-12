#include <iostream>

auto amin(int a[], int n, int min) -> int
{
    a[n] = {};
    min  = a[0];
    std::cout << "Twoja tablica a o rozmiarze n równej " << n
              << " ma wartości równe:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << ", ";
    }
    std::cout << std::endl;
    std::cout << "A najmniejszą wartością tej tablicy jest:" << std::endl;
    for (int j = 0; j < n; j++) {
        if (min > a[j]) {
            min = a[j];
        }
    }
    std::cout << min << std::endl;
    return min;
}

int main()
{
    const int n = 5;
    int a[n]    = {3, 2, 6, 4, 5};
    int min     = a[0];
    amin(a, n, min);
    return 0;
}
