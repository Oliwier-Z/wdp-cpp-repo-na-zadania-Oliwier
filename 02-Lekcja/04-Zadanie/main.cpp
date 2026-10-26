#include <iostream>

int main() {
    int sec;

    std::cout << "Podaj liczbę sekund: ";
    std::cin >> sec;

    // minuty
    int min = sec / 60;

    // pozostałe sekundy
    int rem_sec = sec % 60;

    std::cout << min << " min i " << rem_sec << " sekund\n";

    return 0;
}