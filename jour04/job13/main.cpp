#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Destination {
    string ville;
    double tempsVol;
};

int main() {
    vector<Destination*> listeDestinations;
    int nombre;

    cout << "Nombre de destinations : ";
    cin >> nombre;

    for (int i = 0; i < nombre; i++) {
        Destination* d = new Destination;
        cout << "Destination : ";
        cin >> d->ville;
        cout << "Temps de vol : ";
        cin >> d->tempsVol;
        listeDestinations.push_back(d);
    }

    cout << "\nAffichage :" << endl;
    for (Destination* ptr : listeDestinations) {
        cout << ptr->ville << " - " << ptr->tempsVol << "h" << endl;
    }

    cout << "\nModification (+1h) :" << endl;
    for (Destination* ptr : listeDestinations) {
        ptr->tempsVol += 1.0;
        cout << ptr->ville << " - " << ptr->tempsVol << "h" << endl;
    }

    for (Destination* ptr : listeDestinations) {
        delete ptr;
    }
    listeDestinations.clear();

    return 0;
}