#include <iostream>
#include <cstdlib>
#include <ctime>
int main()
{
    srand( time( NULL ) );
    int test_liczba =  (( std::rand() % 100 ) + 1 );
    //std::cout << "Wylosowanie pierwsze: " << test_liczba << std::endl;
    std::cout << "Wybierz liczbę od 1 do 100" << std::endl;

    while (true)
    {
        std::cout << "Twoja liczba to: ";
        int zgadnij_liczbe;
        std::cin >> zgadnij_liczbe;
        if (test_liczba == zgadnij_liczbe){
            std::cout << "just right" << std::endl;
            break;
        }
        else if (test_liczba < zgadnij_liczbe){
            std::cout << "too big" << std::endl;
        }
        else if (test_liczba > zgadnij_liczbe){
            std::cout << "too small" << std::endl;
        }
                
    }
    return 0;
}
