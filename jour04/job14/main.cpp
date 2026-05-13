#include <iostream>

int main() {
    int x = 12;
    
    int& ref = x;

    std::cout << "Valeur avant modification : " << x << std::endl;

    ref = 25;

    std::cout << "Valeur après modification : " << x << std::endl;

    return 0;
}