#include <iostream>

int main() {
    int HT;
    int Kg;
    int TVA;
    using namespace std;

    cout << "Entrer le prix HT d'un kilo de carottes : ";
    cin >> HT;

    cout << "Entrer le nombre de kilos de carottes : ";
    cin >> Kg;

    cout << "Entrer le taux de TVA (ex : 15) : ";
    cin >> TVA;
    
    cout << (HT*Kg) * (1 + (TVA/100.0));
    
    return 0;
}


