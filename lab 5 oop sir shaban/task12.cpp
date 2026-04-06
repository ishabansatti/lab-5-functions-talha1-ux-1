#include <iostream>
using namespace std;



void printType(int value) {
    cout << "You passed an integer: " << value << endl;
}

void printType(double value) {
    cout << "You passed a double: " << value << endl;
}

void printType(char value) {
    cout << "You passed a character: " << value << endl;
}

void printType(string value) {
    cout << "You passed a string: " << value << endl;
}

int main() {
    printType(10);
    printType(5.5);
    printType('A');
    printType("Hello");

    return 0;
}