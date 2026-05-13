#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Staff {
    string nom;
    string prenom;
};

struct Etudiant {
    string nom;
    string prenom;
};

int main() {
    Staff membre1 = {"Cordial", "Alicia"};
    Staff membre2 = {"Picard", "Morgan"};

    cout << "Prenoms du staff : " << membre1.prenom << " et " << membre2.prenom << endl;

    int nombreEtudiants;
    cout << "\nCombien d'etudiants voulez-vous saisir ? ";
    cin >> nombreEtudiants;

    vector<Etudiant> listeEtudiants;

    for (int i = 0; i < nombreEtudiants; i++) {
        Etudiant e;
        cout << "Etudiant " << i + 1 << " - Nom : ";
        cin >> e.nom;
        cout << "Etudiant " << i + 1 << " - Prenom : ";
        cin >> e.prenom;
        listeEtudiants.push_back(e);
    }

    cout << "\nPrenoms des etudiants saisis :" << endl;
    for (const auto& etu : listeEtudiants) {
        cout << "- " << etu.prenom << endl;
    }

    return 0;
}