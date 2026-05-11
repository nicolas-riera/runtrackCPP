#include <iostream>
#include <iomanip>

int main() {
    float moy = 0.0f;;
    float n;
    using namespace std;

    cout << "Entrez 5 nombres :" << endl;

    for (size_t i = 0; i < 5; i++)
    {
        cin >> n;
        moy += n;
    }
    
    moy /= 5;

    cout << "La moyenne est : " << fixed << setprecision(2) << moy << endl;
    
    return 0;
}


