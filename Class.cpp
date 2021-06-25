#include <iostream>

using namespace std;
// name you pin

class CAR
{
    public:

        string model_name;
    
        CAR(string name)
        {
            model_name = name;
        }

        void display()
        {
            cout << model_name;
        }

};

int main()
{

    CAR c1("TESLA");

    c1.display();
}