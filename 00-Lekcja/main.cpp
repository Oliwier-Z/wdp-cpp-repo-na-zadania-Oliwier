#include <iostream>

int main() {
    std::string imie = "";

    std::cout << "Podaj imię: ";
    std::cin >> imie;
    std::cout << "Cześć \033[1m" << imie << "\033[0m dobrze cię widzieć!" << std::endl;

    return 0;
}