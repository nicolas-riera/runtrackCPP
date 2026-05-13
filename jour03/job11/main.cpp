#include <iostream>

int main() {
    int tableau[10];
    int somme = 0;

    std::cout << "Entrez 10 nombres entiers : " << std::endl;

    for (size_t i = 0; i < 10; i++) {
        std::cin >> tableau[i];
    }

    for (size_t i = 0; i < 10; i++) {
        if (tableau[i] % 2 == 0) {
            somme += tableau[i];
        }
    }

    std::cout << "La somme des éléments pairs est : " << somme << std::endl;

    return 0;
}