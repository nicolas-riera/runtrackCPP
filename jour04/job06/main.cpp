#include <iostream>
#include <string>

using namespace std;

int main() {
   
    int entier = 17;
    float flottant = 3.14f;
    double reel = 123.345;
    string caractere = "La Plateforme";

    cout << "entier : " << entier << ", " << &entier << endl;
    cout << "flottant : " << flottant << ", " << &flottant << endl;
    cout << "reel : " << reel << ", " << &reel << endl;
    cout << "caractere : " << caractere << ", " << &caractere << endl;

    return 0;
}