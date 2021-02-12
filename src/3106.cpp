#include <iostream>

auto search(int a[], int n, int needle) -> int
{
    a[n]   = {};
    needle = 20;
    std::cout << "Twoja tablica a o rozmiarze n równej " << n
              << " ma wartości równe:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << ", ";
    }
    std::cout << std::endl;
    std::cout << "Czy w tablicy znajduję sie wartość needle równa: " << needle
              << "?" << std::endl;
    std::string z = "";
    for (int j = 0; j < n; j++) {
        if (a[j] == needle) {
            std::cout << "Jeśli tak to index wartości twojej tablicy równej "
                         "needle równy jest: "
                      << j;
            z = "";
            break;
        } else {
            z = "Jeśli nei to drukuje: -1";
        }
    }
    std::cout << z << std::endl;
    return needle;
}

int main()
{
    const int n = 5;
    int a[n]    = {20, 30, 40, 50, 60};
    int needle  = 5;
    search(a, n, needle);
    return 0;
}
