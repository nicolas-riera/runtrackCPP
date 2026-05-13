#include <iostream>
#include <string>

using namespace std;

int main() {
   
    int tab[] = {1, 2, 3, 4, 5, 6};

    for (size_t i = 0; i < size(tab); i++)
    {
        cout << tab[i] << ", " << &tab[i] << endl;
    }

    return 0;
}