#include <iostream>

using namespace std;

int main() {

    int i, n, som;
    som = 0;

    cout << "for" << endl;

    for(i = 0; i < 4; i++) {
        cout << "donnez un entier";
        cin >> n;
        som += n;
    }

    cout << "while" << endl;

    i = 0;
    while (i < 4) {
        cout << "donnez un entier";
        cin >> n;
        som += n;
        i++;
    }

    cout << "do while" << endl;

    i = 0;
    do {
        cout << "donnez un entier";
        cin >> n;
        som += n;
        i++;
    } while (i < 4);

    cout << "Somme : " << som;

    return 0;
}