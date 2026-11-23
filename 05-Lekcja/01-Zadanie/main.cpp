#include <iostream>

int main() {
    int a, b;
    char znak;

    std::cout << "Działanie: ";
    std::cin >> a >> znak >> b;

    switch (znak) {
    case '+':
        std::cout << "SUMA: " << a + b << '\n';
        break;
    
    case '-':
        std::cout << "RÓŻNICA: " << a - b << '\n';
        break;

    case '*':
        std::cout << "ILOCZYN: " << a * b << '\n';
        break;

    case '/':
        if (b == 0) {
            std::cerr << "Nie można dzielić przez 0\n";
            break;
        }
        
        std::cout << "ILORAZ: " << a / b << '\n';
        break;
    case '%':
        if (b == 0) {
            std::cerr << "Nie można dzielić przez 0\n";
            break;
        }

        std::cout << "MODULO: " << a % b << '\n';
        break;
    }
}