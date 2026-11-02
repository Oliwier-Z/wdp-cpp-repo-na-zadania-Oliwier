#include <iostream>

int main() {
    int a = 0, b = 0;

    std::cout << "Podaj dwie liczby całkowite ze spacją: ";
    std::cin >> a >> b;

    if (b == 0) {
        std::cerr << "Nie można dzielić przez 0!\n";
        return 1;
    }

    if (a % b == 0) {
        std::cout << "Liczba " << a << " jest podzielna przez " << b << '\n';
    }
    else {
        std::cout << "Liczba " << a << " nie jest podzielna przez " << b << '\n';
    }

    return 0;
}