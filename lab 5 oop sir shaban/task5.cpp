#include <iostream>
using namespace std;

int main()
{
    int x = 4;
    int y = 5;


    auto calc = [x, y]() {
        cout << "Sum = " << x + y << endl;
        cout << "Product = " << x * y << endl;
    };


    calc();

    return 0;
}