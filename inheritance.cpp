#include <iostream>
using namespace std;


class A
{
    public:
        int data;
        A()
        {   
            data = 10;
            cout << "Inserting data into data members of a class";
        }


};

class B: public A
{

};

int main()
{
    class B obj;
    cout << obj.data << "\n";

    return 0;
}