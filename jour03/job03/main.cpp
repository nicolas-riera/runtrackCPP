#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {

    int check = 0;

    string text1 = "vive la plateforme !";

    string text2 = "vive la plateforme !";

    if (text1.length() == text2.length()) {
        for (size_t i = 0; i < text1.length(); i++)
        {
            if (text1[i] != text2[i]) {
                break;
            }
            check = 1;
        }
        
    }

    cout << check << endl;    

    return 0;
}