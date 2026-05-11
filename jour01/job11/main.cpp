#include <iostream>

int main() {
    int n;
    int m;
    using namespace std;

    cout << "Entrer un nombre : ";
    cin >> n;

    cout << "Entrer un autre nombre : ";
    cin >> m;

    cout << "Avant échange : " << n << ", " << m << endl;

    swap(m, n);

    cout << "Après échange : " << n << ", " << m << endl;
    
    return 0;
}


