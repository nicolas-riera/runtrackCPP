#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
   
    vector<int> tab;

    int n;

    do {
        cout << "Entrez un entier (entrez 0 pour arrêter) : ";
        cin >> n;
        tab.push_back(n);
    } while (n != 0);

    for (int e : tab) {
        cout << e << " ";
    }

    return 0;
}