#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

    string text;

    cout << "Entrez un texte : ";
    cin >> text;

    char tab[text.length()];

    for (size_t i = 0; i < text.length(); i++)
    {
        tab[i] = text[i];
    }
    
    cout << "{ ";
    for (char n : tab) {
        cout << n << " ";
    }
    cout << "}";

    return 0;
}