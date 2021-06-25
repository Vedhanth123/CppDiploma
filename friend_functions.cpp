#include <iostream>
using namespace std;

class A
{
    private: 
    int data;
    
    public:

    A()
    {
        data = 10;

    }

    int friend printer();
};

int printer()
{

}
int main()