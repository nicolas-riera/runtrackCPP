#include <iostream>

using namespace std;

int main() {

    int n;

    cout << "Entrer une note : ";
    cin >> n;

    if (0 <= n && n <= 20) {
        if (n > 10) {
            cout << "Validé." << endl;
        } else {
            cout << "Non validé." << endl;
        }

    } else {
        cout << "Note hors plage." << endl;
    }

    return 0;
}