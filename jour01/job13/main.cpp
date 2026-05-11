#include <iostream>
#include <cmath>

int main() {
    int n;
    using namespace std;

    cout << "Entrer un nombre supérieur à 5 : ";
    cin >> n;

    if (n > 5) {
        for (size_t i = 5; i <= n; i++)
        {
            cout << pow(i, 3) << endl;
        }
        
    } else {
        cout << "Le nombre entrée n'est pas supérieur à 5..." << endl;
    }
    
    return 0;
}


