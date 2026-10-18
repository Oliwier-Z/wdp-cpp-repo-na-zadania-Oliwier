#include <iostream>
#include <iomanip>

int main() {

    int a = 7, b = 42, c = 1250;

    std::cout << std::setw(4) << a << '\n';
    std::cout << std::setw(4) << b << '\n';
    std::cout << std::setw(4) << c << '\n';

    return 0;
}