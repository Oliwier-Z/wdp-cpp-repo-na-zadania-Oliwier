#include <iostream>
#include <iomanip>

int main() {
    int n = 0, suma = 0;
    float srednia = 0;
    float tb[50];

    std::cout << "Podaj liczbę n: ";
    std::cin >> n;

    for (int i = 0; i < n; i ++) {
        std::cout << ": ";
        std::cin >> tb[i];
    }

    for (int i = 0; i < n; i++) {
        suma += tb[i];
    }

    srednia = (float)suma / n;

    std::cout << "SUMA: " << suma << "\nŚREDNIA: " << std::setprecision(3) << srednia << '\n';

    return 0;
}