#include <iostream>
#include <cmath>
using namespace std;


int calculate(int a, int b, char op);
double calculate(double a, double b, char op);
double power(double base, int exp);
void total_calc();


void total_calc() {
    static int count = 0;
    count++;
    cout << "Total calculations performed: " << count << endl;
}


int calculate(int a, int b, char op) {
    total_calc();
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0) {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
            return a / b;
        default:
            cout << "Invalid operator!" << endl;
            return 0;
    }
}


double calculate(double a, double b, char op) {
    total_calc();
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0.0) {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
            return a / b;
        default:
            cout << "Invalid operator!" << endl;
            return 0;
    }
}


double power(double base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}

int main() {

    cout << "5 + 3 = " << calculate(5, 3, '+') << endl;
    cout << "10 / 0 = " << calculate(10, 0, '/') << endl;


    cout << "7.5 * 2.0 = " << calculate(7.5, 2.0, '*') << endl;


    cout << "2^8 = " << power(2, 8) << endl;
    cout << "3^4 = " << power(3, 4) << endl;


    auto abs_diff = [](double x, double y) {
        cout << "Absolute difference: " << fabs(x - y) << endl;
    };

    abs_diff(10, 3);
    abs_diff(7.5, 12.3);

    return 0;
}