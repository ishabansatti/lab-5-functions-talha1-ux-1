#include <iostream>
using namespace std;

int main()
{
    int counter = 0;


    auto increment = [&counter]() {
        counter++;
    };


    increment();
    cout << "Counter = " << counter << endl;

    increment();
    cout << "Counter = " << counter << endl;

    increment();
    cout << "Counter = " << counter << endl;

    return 0;
}