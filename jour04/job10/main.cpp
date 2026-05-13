#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using namespace std;

struct NoteEtudiant {
    string nom;
    string prenom;
    double note;
};

void afficherMenu() {
    cout << "\nMenu :" << endl;
    cout << "1. Ajouter une note" << endl;
    cout << "2. Afficher la liste de notes" << endl;
    cout << "3. Supprimer une note d'un etudiant" << endl;
    cout << "4. Afficher la moyenne des notes" << endl;
    cout << "5. Quitter" << endl;
    cout << "Choix : ";
}

int main() {
    vector<NoteEtudiant> listeNotes;
    int choix;

    do {
        afficherMenu();
        cin >> choix;

        switch (choix) {
            case 1: {
                NoteEtudiant n;
                cout << "Nom : "; cin >> n.nom;
                cout << "Prenom : "; cin >> n.prenom;
                cout << "Note : "; cin >> n.note;
                listeNotes.push_back(n);
                break;
            }
            case 2:
                cout << "\n--- Liste des notes ---" << endl;
                for (const auto& n : listeNotes) {
                    cout << n.prenom << " " << n.nom << " : " << n.note << "/20" << endl;
                }
                break;
            case 3: {
                string nomCherche;
                cout << "Nom de l'etudiant a supprimer : ";
                cin >> nomCherche;
                
                for (auto it = listeNotes.begin(); it != listeNotes.end(); ++it) {
                    if (it->nom == nomCherche) {
                        listeNotes.erase(it);
                        cout << "Note supprimee." << endl;
                        break;
                    }
                }
                break;
            }
            case 4:
                if (listeNotes.empty()) {
                    cout << "Aucune note enregistree." << endl;
                } else {
                    double somme = 0;
                    for (const auto& n : listeNotes) somme += n.note;
                    cout << "Moyenne de la classe : " << somme / listeNotes.size() << "/20" << endl;
                }
                break;
            default:
                choix = 5;
                break;

        }

    } while (choix != 5);

    return 0;
}