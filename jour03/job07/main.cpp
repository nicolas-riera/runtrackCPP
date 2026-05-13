#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

    int tableau[10];

    cout << "Entrez 10 nombres entiers : " << endl;

    for (size_t i = 0; i < 10; i++)
    {
        cin >> tableau[i];
    }

    int max = tableau[0];

    for (int n : tableau) {
        if (n > max) {
            max = n;
        } 
    }

    cout << max << endl;
    
    return 0;
}