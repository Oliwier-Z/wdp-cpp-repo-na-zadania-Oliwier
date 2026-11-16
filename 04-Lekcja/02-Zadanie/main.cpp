#include <iostream>

int main() {
    int n = 0;
    int tb[n];

    std::cout << "Podaj liczbę n: ";
    std::cin >> n;

    for (int i = 0; i < n; i ++) {
        std::cin >> tb[i];
    }

    return 0;
}