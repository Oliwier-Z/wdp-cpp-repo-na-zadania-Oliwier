#include <iostream>

int main() {
    int n = 0, x = 0;

    std::cout << "Podaj liczbę n: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        x += i;
    }
    std::cout << "SUMA: " << x << '\n';

    return 0;
}