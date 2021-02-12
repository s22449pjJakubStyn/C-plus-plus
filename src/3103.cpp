#include <iostream>

auto asum(int a[], int n, int sum) -> int
{
    a[n] = {};
    sum  = 0;
    std::cout << "Twoja tablica a o rozmiarze n równej " << n
              << " ma wartości równe:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << ", ";
    }
    std::cout << std::endl;
    std::cout << "A suma wartości tej tablicy wynosi:" << std::endl;
    for (int j = 0; j < n; j++) {
        sum += a[j];
    }
    std::cout << sum << std::endl;
    return sum;
}

int main()
{
    const int n = 5;
    int a[n]    = {1, 2, 3, 4, 5};
    int sum     = 0;
    asum(a, n, sum);
    return 0;
}
