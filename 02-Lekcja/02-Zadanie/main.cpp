#include <iostream>
#include <iomanip>

int main() {
    double oc0, oc1, oc2, oc3, oc4;

    std::cout << "Podaj oceny ucznia: ";
    std::cin >> oc0 >> oc1 >> oc2 >> oc3 >> oc4;

    double srednia = (oc0 + oc1 + oc2 + oc3 + oc4) / 5;
    
    std::cout << std::fixed << std::setprecision(2) << srednia << '\n';

    return 0;
}