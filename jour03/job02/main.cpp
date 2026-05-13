#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {

    string text = "vive la plateforme !";

    cout << text << endl;

    for (size_t i = 0; i < text.length(); i++)
    {
        switch (text[i]) {
            case 'a' :
            case 'e' :
            case 'i' :
            case 'o' :
            case 'u' :
            case 'y' :
                text.erase(i, 1);
                i--;
                break;
            default:
                break;
        }
    }

    cout << text << endl;    

    return 0;
}