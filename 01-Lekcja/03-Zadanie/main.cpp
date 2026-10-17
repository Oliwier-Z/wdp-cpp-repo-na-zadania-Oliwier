#include <iostream>

int main() {
    struct dane {
        char imie[50];
        int wiek;
        float wzrost;
    };

    dane user;

    std::cout << "Podaj imię: ";
    std::cin >> user.imie;
    std::cout << "Podaj wiek: ";
    std::cin >> user.wiek;
    std::cout << "Podaj wzrost: ";
    std::cin >> user.wzrost;

    printf("imie: %s\nwiek: %d\nwzrost: %.2f\n", user.imie, user.wiek, user.wzrost);

    return 0;
}