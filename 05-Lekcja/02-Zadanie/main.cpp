#include <iostream>

int main() {
    int x = 0, y = 0, wyn = 0;
    char c;

    while (true) {
        std::cout << "\033[2J\033[H\n";
        std::cout << "WYNIK: " << wyn << '\n';

        std::cout << "dwie liczby całkowite: ";
        std::cin >> x >> y;

        std::cout << "operator: ";
        std::cin >> c;

        switch (c)
        {
        case constant expression:
            /* code */
            break;
        
        default:
            break;
        }
        wyn = x + y;
    }

}