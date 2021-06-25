#include <iostream>
using namespace std;

// operator are +,-, *,/, %, !
// operator overloading using same operator with different functions, datatypes is known as operator
// overloading 

// example of operator overloading
// 2 + 3 = 5 [int]
// 'venu' + 'sreehan' = 'venusreehan' [string]

 
class Time
{

    public:
    // data 
    int hour, mins;

    // parameterized constructor
    Time(int h, int m)
    {
        hour = h;
        mins = m;
    }

    void printer()
    {
        cout << hour << ':';
        cout << mins << "\n";
    }


    // syntax for function creating
    // returntype function_name(args list)

    // syntax for operator overloading
    // returntype <operator>+(arguments list)

    // overloding + operator
    Time operator+(Time obj)
    {
        class Time temp(0,0);

        temp.hour = hour + obj.hour;
        temp.mins = mins + obj.mins;

        return temp;
    }

};

int main()
{
    class Time venu(2,30);
    class Time Sreehan(1,55);

    class Time Vedhanth = venu + Sreehan;

    Vedhanth.printer();

    return 0;

}