#include <iostream>
using namespace std;

class age
{
    int year;
    int month;

    age(int y, int m)
    {
        year = y;
        month = m;
    }

    void age_incrementer()
    {   
        year ++;
        month ++;
    }
}

int main()
{
    class age sreehan(20,1);

    sreehan.age_incrementer();
}