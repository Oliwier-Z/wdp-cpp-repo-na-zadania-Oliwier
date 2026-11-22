#include <iostream>
#include <iomanip>

int main() {
    int liczba;
    int licznik = 0;
    long long suma = 0;
    int najW = 0;
    int najM = 0;

    std::cout << "Podaj liczby calkowite (0 konczy wczytywanie):\n";
    std::cin >> liczba;

    while (liczba != 0) {
        if (licznik == 0) {
            najW = liczba;
            najM = liczba;
        } else {
            if (liczba > najW) {
                najW = liczba;
            }
            if (liczba < najM) {
                najM = liczba;
            }
        }

        suma += liczba;
        licznik++;

        std::cout << ": ";
        std::cin >> liczba;
    }

    if (licznik == 0) {
        std::cout << "Nie podano zadnych liczb\n";
    } else {
        double srednia = (double)suma / licznik;

        std::cout << "\nWyniki:\n";
        std::cout << "Najwieksza liczba: " << najW << '\n';
        std::cout << "Najmniejsza liczba: " << najM << '\n';
        std::cout << "Suma: " << suma << '\n';
        std::cout << "Srednia: " << std::fixed << std::setprecision(2) << srednia << '\n';
    }

    return 0;
}