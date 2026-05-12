#include <iostream>

using namespace std;

int main() {

    int a;
    int b;

    cout << "Entrer le début des nombres : ";
    cin >> a;
    cout << "Entrer la fin des nombres : ";
    cin >> b;

    for (size_t i = a; i <= b; i++)
    {   
        cout << i << endl;
    }
    
    return 0;
}