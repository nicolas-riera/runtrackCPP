#include <iostream>

int multiplication(int a, int b);

int main() {
    int a = 10;
    int b = 5;
    
    std::cout << multiplication(a, b) << std::endl;
}

int multiplication(int a,  int b) {
    return a*b;
}