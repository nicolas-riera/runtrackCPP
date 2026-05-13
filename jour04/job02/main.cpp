#include <iostream>

using namespace std;

int main() {

    int val1 = 1;
    int val2 = 2;

    int* ptr1 = &val1;
    int* ptr2 = &val2;

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    cout << *ptr1 << ", " << *ptr2 << endl;

    return 0;
}