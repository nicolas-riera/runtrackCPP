#include <iostream>
#include <string>

int main() {
    std::string string;
    std::string string2 = "Bonjour";

    std::cout << "Entrez une chaine de caracteres : ";
    std::getline(std::cin, string);

    if (string < string2) {
        std::cout << string << std::endl;
        std::cout << string2 << std::endl;
    } else {
        std::cout << string2 << std::endl;
        std::cout << string << std::endl;
    }

    return 0;
}