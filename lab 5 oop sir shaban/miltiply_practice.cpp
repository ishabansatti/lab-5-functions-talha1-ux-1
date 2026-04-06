#include <iostream>
using namespace std;
int multiply(const int &a ,const int &b);
int main ()
{
    int a = 10;
    int b = 20;
    int result = multiply(a,b);
    cout<<"Result is : "<<result;


}

int multiply(const int &a,const int &b)
{
    return a * b  ;

}
