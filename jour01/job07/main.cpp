#include <iostream>

int main() {
    int n;
    using namespace std;

    cout << "Entrer un nombre entier : ";
    cin >> n;
    
    if (n % 2 == 0)
    {
        cout << "Le nombre est pair.";
    } else {
        cout << "Le nombre est impair.";
    }
    
    return 0;
}
