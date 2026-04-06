#include <iostream>
using namespace std;

int generateID();

int main()
{

    for (int i = 0; i < 5; i++)
    {
        cout << "Generated ID: " << generateID() << endl;
    }

    return 0;
}

int generateID()
{
    static int id = 1000;
    id++;
    return id;
}