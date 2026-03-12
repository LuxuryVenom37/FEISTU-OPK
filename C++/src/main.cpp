#include <iostream>
#include <string>
#include "Greeter.h"

int main() {
    std::string name;

    std::cout << "Zadaj meno: ";
    std::cin >> name;

    Greeter g("Ahoj, ");
    std::cout << g.greet(name) << '\n';
    return 0;
}