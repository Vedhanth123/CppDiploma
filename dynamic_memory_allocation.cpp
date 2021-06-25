#include <iostream>
using namespace std;

int* function()
{
    int *p = new int[10];

    // int p[10];
    for(int i = 0; i < 10;  i++)
    {
        p[i] = i;
    }

    return p;

}

int main()
{
    int *a;

    a = function();

    for(int i = 0; i < 10; i ++)
    {
        cout << a[i] << endl;
    }

    delete[] a;
    
    for(int i = 0; i < 10; i ++)
    {
        cout << a[i] << endl;
    }
}