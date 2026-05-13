#include <iostream>

using namespace std;

int main() {
    
    int tab[5] = {1, 2, 3, 4, 5};

    int (&ref)[5] = tab;

    for (int e : ref) {
        cout << e << " ";
    }

    return 0;
}