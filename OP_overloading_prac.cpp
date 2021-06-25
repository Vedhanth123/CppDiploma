using namespace std;

// creating a class of Time with data members 1) hour, 2) mins
class Time
{
    public:
    int hour;
    int mins;
    int sec;

    // overload '+' operator to add Time using methods
    Time operator+(Time t1);

    // overloading '-' operator to sub Time using friend functions
    Time friend operator-(Time t1, Time t2);
    
    // overloading '--' decrementing operator using methods
    void operator--()
    {
        hour--;
    }

    // overloading '++' operator using friend function
    void friend operator++(Time t1)
    {
        t1.hour ++;
    }

    // create two constructor
    Time(int h, int m, int s)
    {
      
        // Converting seconds more than 60 to desired format
        sec = s%60;
        mins = m%60 + (s/60);
        hour = h + (m/60);
    }

    Time()
    {
        hour = 0;
        sec = 0;
    }


};

// defining operator overloader
Time Time::operator+(Time t1)
{
    class Time temp;

    // Converting seconds more than 60 to desired format
    temp.sec = (sec + t1.sec)%60;
    temp.mins = (mins + t1.mins)%60 + (sec + t1.sec)/60;
    temp.hour = (hour + t1.hour) + (mins + t1.mins)/60;

    return temp;
}

Time operator-(Time t1, Time t2)
{
      // Converting seconds more than 60 to desired format

    class Time temp;

    temp.sec = (t1.sec - t2.sec)%60;
    temp.mins = (t1.mins - t2.mins)%60 + (t1.sec - t2.sec)/60;
    temp.hour = (t1.hour - t2.hour) + (t1.mins - t2.mins)/60;

    return temp;
}


int main()
{
    class Time t1(1,70,70);
    class Time t2(2,80,80);

    // class Time t3 = t1 + t2;
    class Time t4 = t2 - t1;
    --t1;
    --t2;
    return 0;

}