#include <iostream>
using namespace std;
int sqt(int num);
int main()
{
    int num  = 5;
    sqt(num);

}

int sqt(int num)
{
    int sqt = num * num;
    cout << sqt;
    return num;
}
