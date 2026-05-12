#include <iostream>
#include <random>

using namespace std;

int main() {

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(1, 100);

    int a = distr(gen);
    int b;
    
    do {
        b = distr(gen); 
    } while (b < a);

    int n;

    cout << "Entrer un nombre : ";
    cin >> n;

    if (a <= n && n <= b) {
        cout << "Gagné." << endl;
    } else {
        cout << "Perdu." << endl;
    }
    
    return 0;
}