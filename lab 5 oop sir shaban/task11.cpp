#include <iostream>
using namespace std;


int area(int side) {
    return side * side;
}


int area(int length, int width) {
    return length * width;
}


double area(double radius) {
    return 3.14159 * radius * radius;
}

int main() {
    cout << "Square area: " << area(5) << endl;
    cout << "Rectangle area: " << area(4, 6) << endl;
    cout << "Circle area: " << area(3.0) << endl;

    return 0;
}