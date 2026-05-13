#include <iostream>

using namespace std;

int main() {
    
    int tab[] = {1, 6, 75, -4, 926, 918, 45, 47};
    int max = tab[0];

    for (int e : tab) {
        if (e > max) {
            max = e;
        }
    }

    cout << max << endl;

    return 0;
}