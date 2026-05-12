#include <iostream>

using namespace std;

int main() {

    int a, b, result;
    char calc_operator;

    cout << "Entrer un nombre : ";
    cin >> a;
    cout << "Entrer l'opérateur (+, -, *, /) : ";
    cin >> calc_operator;
    cout << "Entrer un second nombre : ";
    cin >> b;

    switch (calc_operator) {
        case '+' :
            result = a + b;
            break;
        case '-' :
            result = a - b;
            break;
        case '*' :
            result = a * b;
            break;
        case '/' :
            result = a / b;
            break;
        default :
            result = 0;
            break; 
    }

    cout << "Résultat : " << result << endl;

    return 0;
}