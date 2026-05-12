#include <iostream>

using namespace std;

int main() {

    int limite, t1 = 0, t2 = 1, suivant = 0;

    cout << "Entrez la limite maximale pour la suite : ";
    cin >> limite;

    cout << "Suite de Fibonacci : ";

    if (limite >= 0) cout << t1;
    if (limite >= 1) cout << ", " << t2;

    suivant = t1 + t2;

    while (suivant <= limite) {
        cout << ", " << suivant;
        t1 = t2;          
        t2 = suivant;    
        suivant = t1 + t2; 
    }

    cout << endl;
    
    return 0;
}