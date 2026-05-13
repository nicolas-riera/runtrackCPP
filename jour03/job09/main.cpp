#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

    string text1;
    string text2;
    bool check = false;

    cout << "Entrez un texte : ";
    cin >> text1;
    cout << "Entrez un autre texte : ";
    cin >> text2;

    for (size_t i = 0; i < text2.length(); i++)
    {
        if (text2[i] == text1[0]) {
            check = true;
            for (size_t j = 1; j < text1.length(); j++)
            {
               if (text2[i + j] != text1[j]) {
                check = false;
               }
            }
            
        }
    }

    if (check) {
        cout << "Vrai" << endl;
    } else {
        cout << "Faux" << endl;
    }

    return 0;
}