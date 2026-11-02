#include <iostream>

int main() {
    int oceny[5] = {};
    int ndst = 0;

    std::cout << "Podaj oceny ucznia: ";
    std::cin >> oceny[0] >> oceny[1] >> oceny[2] >> oceny[3] >> oceny[4];

    std::cout << "ŚREDNIA OCEN: " << (float)(oceny[0] + oceny[1] + oceny[2] + oceny[3] + oceny[4]) / 5 << '\n';

    for (int i = 0; i < 5; i++) {
        if (oceny[i] == 1) ndst++;
    }

    std::cout << "ILOŚĆ NDST: " << ndst << '\n';

    return 0;
}