#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n;
    double somme;

    cout << "Entrez le nombre de termes (n) : ";
    cin >> n;

    if (n <= 0) {
        cout << "Veuillez entrer un entier strictement positif." << endl;
    } else {
        for (int i = 1; i <= n; ++i) {
            somme += 1.0 / i;
        }

        cout << "La somme des " << n << " premiers termes est : ";
        cout << fixed << setprecision(10) << somme << endl;
    }
    
    
    return 0;
}