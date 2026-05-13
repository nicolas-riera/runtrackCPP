#include <iostream>
#include <string>

using namespace std;

int main() {
    string text = "Plateforme";
    string inverse = text; 

    const char* ptrText = &text[text.length() - 1];
    char* ptrInverse = &inverse[0];

    for (size_t i = 0; i < text.length(); i++) {
        *ptrInverse = *ptrText;
        ptrInverse++;
        ptrText--;
    }

    cout << inverse << endl;

    return 0;
}