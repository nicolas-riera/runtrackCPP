#include <iostream>

int addition(int a, int b);

int main() {
    int a = 10;
    int b = 5;
    
    std::cout << addition(a, b) << std::endl;
}

int addition(int a,  int b) {
    return a+b;
}