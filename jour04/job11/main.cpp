#include <iostream>
#include <string>

using namespace std;

int main() {
    string fruit[5] = {"Pomme", "Banane", "Fraise", "Mangue", "Peche"};
    
    for (int i = 0; i < 5; i++) {
        cout << fruit[i] << endl;
    }

    int nbFavoris;
    cout << "Nombre : ";
    cin >> nbFavoris;

    string* favoris = new string[nbFavoris];

    for (int i = 0; i < nbFavoris; i++) {
        cin >> favoris[i];
    }

    for (int i = 0; i < nbFavoris; i++) {
        cout << favoris[i] << endl;
    }

    delete[] favoris;
    favoris = nullptr;

    return 0;
}