#include <iostream>
#include <string>

using namespace std;

struct tab
{
    int date;
    string ecole;
    float pi;
    string groupe;
};


int main() {
   
    tab tab = {2019, "La Plateforme", 3.14, "Etudiants"};

    cout << tab.date << ", " << &tab.date << endl;
    cout << tab.ecole << ", " << &tab.ecole << endl;
    cout << tab.pi << ", " << &tab.pi << endl;
    cout << tab.groupe << ", " << &tab.groupe << endl;

    return 0;
}