#include <iostream>

using namespace std;

int main() {

    int n;

    do {
        cout << "Entrer un nombre : ";
        cin >> n;

        if (n > 0) {
            cout << n * n << endl;
        } else  if (n != 0) {
            cout << "Nombre non valide." << endl;
        }
    } while (n != 0);
    
    return 0;
}