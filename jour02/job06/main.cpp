#include <iostream>

using namespace std;

int main() {

    int n;

    cout << "Entrer un nombre : ";
    cin >> n;

    for (size_t i = 0; i <= n; i++)
    {
        if (i % 3 == 0 && n != 0) {
            cout << i << ", Multiple de 3" << endl;
        } else if (i % 5 == 0 && n != 0) {
            cout << i << ", Multiple de 5" << endl;
        } else {
            cout << i << endl;
        }
    }
    

    return 0;
}