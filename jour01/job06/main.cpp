#include <iostream>

int table_multiplication(int n);

int main() {
    int n;
    using namespace std;

    cout << "Entrer un nombre entier dont vous voulez voir sa table de multiplication :";
    cin >> n;
    
    table_multiplication(n);

    return 0;
}

int table_multiplication(int n) {
    using namespace std;
    for (size_t i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n*i << endl;
    }

    return 0;
    
}