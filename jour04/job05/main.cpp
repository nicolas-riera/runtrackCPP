#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point monPoint;
    Point* ptr = &monPoint;

    ptr->x = 10;
    ptr->y = 20;

    cout << "x : " << monPoint.x << endl;
    cout << "y : " << monPoint.y << endl;

    return 0;
}