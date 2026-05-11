#include <iostream>

bool check_annee_bissextile(int annee);

int main() {
    int n;
    using namespace std;

    cout << "Entrer une année : ";
    cin >> n;
    
    if (check_annee_bissextile(n))
    {
        cout << "L'année est bissextile.";
    } else {
        cout << "L'année n'est pas bissextile.";
    }
    
    return 0;
}

bool check_annee_bissextile(int annee) {
    if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
        return true; 
    }
    return false;
}
