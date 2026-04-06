#include <iostream>
using namespace std;
void swap ( int &a , int &b );
int main()
{
    int a = 3 ;
    int b = 5 ;
    cout << "a = "<<a<<endl<<"b = "<<b<<endl ;
    cout<<"value after change is:"<<endl ;
    swap ( a , b ) ;
    cout << "a = "<<a<<endl<<"b = "<<b ;
}

void
swap ( int &a , int &b )
{
    int c = a ;
    a = b   ;
    b = c   ;


}
