#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    std::srand(std::time(0));
    int nombreMystere = std::rand() % 101;
    int tentativesRestantes = 7;
    int choixJoueur = 0;
    bool gagne = false;

    std::cout << "--- Bienvenue au Nombre Mystere ---" << std::endl;
    std::cout << "Trouvez le nombre entre 0 et 100." << std::endl;
    std::cout << "Vous avez " << tentativesRestantes << " chances." << std::endl;

    while (tentativesRestantes > 0 && !gagne) {
        std::cout << "\nIl vous reste " << tentativesRestantes << " tentatives." << std::endl;
        std::cout << "Votre choix : ";
        std::cin >> choixJoueur;

        if (choixJoueur == nombreMystere) {
            gagne = true;
        } else if (choixJoueur < nombreMystere) {
            std::cout << "Trop petit !" << std::endl;
            tentativesRestantes--;
        } else {
            std::cout << "Trop grand !" << std::endl;
            tentativesRestantes--;
        }
    }

    if (gagne) {
        std::cout << "\nFélicitation ! Vous avez trouvé le nombre : " << nombreMystere << std::endl;
    } else {
        std::cout << "\nDommage, vous avez perdu. Le nombre était : " << nombreMystere << std::endl;
    }

    return 0;
}