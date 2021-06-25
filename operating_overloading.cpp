#include <iostream>
using namespace std;

// create a program to add complex numbers by overloading the '+' operator

// create a complex class with 'real' and 'img' as data members
class complex
{
    public: 
        int real;
        int img;

    // constructor to initialize
        complex(int r, int i)
        {
            real = r;
            img = i;
        }       

    // create a member function to overload '+' operator

    // syntax: 

    // <class_type> operator<operator>(argument list)
    // {

    // }

    // create a friend function to overload '-' operator
    
    // syntax:
    
    // friend <class_type> operator<operator>(argument list)
    // {

    // }

    complex friend operator-(complex var);

    complex operator+(complex var);
};

// syntax:

// <return_type> <class_name>::operator<operator>(argument list)

// <return_type> <class_name>::operator<operator>(argument list)

complex complex::operator+(complex var)
{
    class complex temp(0,0);

    temp.real = real + var.real;
    temp.img = img + var.img;

    return temp;
}

complex operator-(complex var)
{
    class complex temp(0,0);

    temp.real = real - var.real;
    temp.img = img - var.img;

    return temp;

}

int main()
{
    class complex t1(3,4), t2(4,2);

    class complex t3 = t1 + t2;

    class complext t3 = t1 - t2;

    return 0;
    
}