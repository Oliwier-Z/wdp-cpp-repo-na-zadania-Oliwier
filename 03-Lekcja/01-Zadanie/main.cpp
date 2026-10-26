#include <iostream>

int main() {
    int a, b;

    std::cout << "Podaj liczby: ";
    std::cin >> a >> b;

    if (a > b) {
        std::cout << "większa liczba: " << a << '\n';
        std::cout << "mniejsza liczba: " << b << '\n';
        std::cout << a << " > " << b << '\n';
    }
    else if (a < b) {
        std::cout << "większa liczba: " << b << '\n';;
        std::cout << "mniejsza liczba: " << a << '\n';;
        std::cout << a << " < " << b << '\n';
    }
    else {
        std::cout << "Liczby są równe\n";
        std::cout << a << " == " << b << '\n';
    }

    return 0;
}