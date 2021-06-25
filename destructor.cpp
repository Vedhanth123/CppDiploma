#include <iostream>
using namespace std;

class A
{
    public:
        int data;

        A()
        {
            data = 10;
            cout << "Initializing data";
        }

        ~A()
        {
            cout << "\nDestructor called";
        }
};


int main()
{
    class A obj;

    cout << obj.data;
}