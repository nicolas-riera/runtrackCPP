#include <iostream>

using namespace std;

int main() {

    int n;
    unsigned long long factorielle = 1;

    cout << "Entrez un nombre  : ";
    cin >> n;

    if (n < 0) {
        cout << "Erreur : La factorielle d'un nombre négatif n'existe pas." << endl;
    } else {
        for (int i = 1; i <= n; ++i) {
            factorielle *= i;
        }

        cout << n << "! = " << factorielle << endl;
    }
    
    return 0;
}