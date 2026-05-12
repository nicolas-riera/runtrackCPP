#include <iostream>

int main() {
    using namespace std;

    int n;

    do {
        cout << "donnez un nombre >0 ";
        cin >> n;
    } while (n<=0);

    return 0;
}