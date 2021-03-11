#include <iostream>
using namespace std;

int main()
{
    int n;
    
    unsigned long long int factorial = 1;

    cout << "Enter a positve number:" << endl;

    cin >> n;

    if(n < 0)
        cout << "Cannot find factorial of a negative number";
    
    else
    {
        for(int i = 1; i <= n; i ++)
        {
            factorial = factorial * i;
        }
    }

    cout << factorial;

    return 0;
}