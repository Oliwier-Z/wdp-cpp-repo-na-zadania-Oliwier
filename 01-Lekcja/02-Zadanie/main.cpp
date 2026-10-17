#include <iostream>

int main() {
    float liczba = 0;

    std::cout << "Podaj liczbę rzeczywistą: ";
    std::cin >> liczba;

    printf("Jedno miejsce: %.1f\n", liczba);
    printf("Trzy miejsca:  %.3f\n", liczba);
    printf("Pięć miejsc:   %.5f\n", liczba);

    return 0;
}