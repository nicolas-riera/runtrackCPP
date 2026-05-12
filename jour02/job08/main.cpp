#include <iostream>

using namespace std;

int main() {

    int a;
    int b;

    cout << "Entrer le début des nombres : ";
    cin >> a;
    cout << "Entrer la fin des nombres : ";
    cin >> b;

    while (a != (b + 1)) {
        cout << a << endl;
        a++;
    }
    
    return 0;
}