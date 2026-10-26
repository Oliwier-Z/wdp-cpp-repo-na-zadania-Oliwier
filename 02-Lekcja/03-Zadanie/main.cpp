#include <iostream>

int main() {
    float a, b;

    std::cout << "Podaj liczby: ";
    std::cin >> a >> b;

    if (b == 0) {
        std::cerr << "Liczba b nie może równać się 0\n";
    }

    float suma = a + b;
    float roznica = a - b;
    float iloczyn = a * b;
    float iloraz = a / b;

    std::cout << "SUMA:    " << suma << '\n';
    std::cout << "RÓŻNICA: " << roznica << '\n';
    std::cout << "ILOCZYN: " << iloczyn << '\n';
    std::cout << "ILORAZ:  " << iloraz << '\n';

    return 0;
}