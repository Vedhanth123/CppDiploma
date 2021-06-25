#include <iostream>
using namespace std;

// creating a stack datastructure using class and with the help of templates
// storing different types of data in it.

// create a template
template <typename T>
class Stack
{
    public:
    // array to store the values
    T array[5];

    // creating a stack pointer to keep track free space in stack
    int sp = 0;

    // push function to send data into stack
    void push(int d)
    {
        if(sp == 5)
        {
            cout << "stack is full";
        }
        else
        {
            array[sp] = d;
            sp ++;
        }
    }

    void pop()
    // pop function to remove data from stack
    {
        if(sp == 0)
        {
            cout << "stack is empty";
        }
        else
        {
            sp --;
            cout << array[sp] << endl;
        }
    }

};

int main()
{
    class Stack<int> s1;
    class Stack<double> s2;

    for(int i = 0; i < 6;  i++)
    {
        s1.push(i+1);
        s2.push(10.3);

    }

    for(int i = 0; i < 6; i ++)
    {
        s1.pop();
        s2.pop();
    }
}