#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    int nombre, original, reste, n = 0;
    double resultat = 0.0;

    cout << "Entrez un nombre  : ";
    cin >> nombre;

    original = nombre;

    int temp = nombre;
    while (temp != 0) {
        temp /= 10;
        ++n;
    }

    temp = nombre;

    while (temp != 0) {
        reste = temp % 10;
        resultat += pow(reste, n);
        temp /= 10;
    }

    if ((int)resultat == original)
        cout << original << " est un nombre narcissique." << endl;
    else
        cout << original << " n'est pas un nombre narcissique." << endl;
    
    return 0;
}