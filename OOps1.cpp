// write a cpp program to implement parameterized constructor

#include <iostream>
using namespace std;

// class is about creating a plan
class Time
{

    public:
    // data 
    int hour, mins;

    // inserting data into hour and mins using constructor

    // constructor: is special method called automatically to insert data into objects

    // we need not keep void,int or anything for constructors

    // default constructor
    Time()
    {
        hour = 0; 
        mins = 0;
    }

    // parameterized constructor
    Time(int h, int m)
    {
        hour = h;
        mins = m;
    }

    // copy constructor
    Time(Time &obj)
    {
        hour = obj.hour;
        mins = obj.mins;
        
    }
    // now we need to print the time
    void printer()
    {
        cout << hour << ':';
        cout << mins << "\n";
    }

    // destructor is used to destroy or remove data

    ~Time()
    {

    }
};

int main()
{
    // now we need to create a bakara to execute this plan
    // this thing is called as creating object.
    class Time obj(2,30);
    class Time obj1;

    class Time obj2(obj);

    obj.printer();
    obj1.printer();
    obj2.printer();


    return 0;

}

