#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {

    string text = "vive la plateforme !";

    cout << text << endl;

    transform(text.begin(), text.end(), text.begin(), [](unsigned char c) {
        return toupper(c);
    });

    cout << text << endl;

    return 0;
}