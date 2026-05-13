#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

    string time;
    bool check = false;

    cout << "Entrez une heure au format 'XXhXX' : ";
    cin >> time;

    if (time.length() == 5) {
        check = true;
        for (size_t i = 0; i < 5; i++)
        {
            if (i < 2 || i > 2)
            {
                if (!isdigit(static_cast<unsigned char>(time[i]))) {
                    check = false;
                    break;
                }
            } else {
                if (time[i] != 'h') {
                    check = false;
                    break;
                }
            }
            
        }
        
    }

    if (check) {
        cout << "Format valide" << endl;
    } else {
        cout << "Format invalide" << endl;
    }

    return 0;
}