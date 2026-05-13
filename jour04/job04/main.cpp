#include <iostream>

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    int* ptrA = &a;
    int* ptrB = &b;
    int* ptrC = &c;

    std::cout << "Valeurs initiales : " << *ptrA << ", " << *ptrB << ", " << *ptrC << std::endl;

    *ptrA = 100;
    *ptrB = 200;
    *ptrC = 300;

    std::cout << "Nouvelles valeurs : " << a << ", " << b << ", " << c << std::endl;

    return 0;
}