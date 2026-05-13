#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::string tab[] = {"radar", "hello", "level", "stats", "world"};
    int taille = sizeof(tab) / sizeof(tab[0]);

    for (int i = 0; i < taille; i++) {
        std::string mot = tab[i];
        std::string envers = mot;
        std::reverse(envers.begin(), envers.end());

        if (mot == envers) {
            std::cout << mot << std::endl;
        }
    }

    return 0;
}