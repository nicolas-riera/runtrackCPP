#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int n;
    using namespace std;

    cout << "Entrer un nombre : ";
    cin >> n;

    string s = to_string(n);
    reverse(s.begin(), s.end());

    cout << s << endl;
    
    return 0;
}


