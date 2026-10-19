#include <iomanip>
#include <iostream>

int main() {
    int a = 0, b = 0, c = 0;

    // wczytywanie
    std::cout << "Podaj 3 liczby całkowite:\n";
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;

    // dzialania
    int suma = a + b + c;
    int roznica = a - b;
    int iloczyn = a * b;
    float iloraz = c / b;

    // suma
    std::cout << "SUMA abc: " << suma << '\n';

    // roznica
    std::cout << "RÓŻNICA a i b: " << roznica << '\n';

    // iloczyn
    std::cout << "ILOCZYN a i c: " << iloczyn << '\n';

    // iloraz

    return 0;
}