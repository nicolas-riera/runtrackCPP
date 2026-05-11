#include <iostream>

int main() {
    int a;
    int b;
    int c;
    using namespace std;

    cout << "Entrer un premier nombre : ";
    cin >> a;

    cout << "Entrer un second nombre : ";
    cin >> b;

    cout << "Entrer un troisième nombre : ";
    cin >> c;
    
    if (a > b && a > c) {
        cout << a;
    } else if (b > a && b > c) {
         cout << b;
    } else {
         cout << c;
    }
    
    return 0;
}


