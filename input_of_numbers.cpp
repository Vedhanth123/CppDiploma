#include <iostream>
using namespace std;

int main()
{
    int number;
    
    // asking user via output

    // "endl" is equivalent to "\n"
    cout << "Enter number:" << endl;

    // inputing numbers via cin [spelled as "c in" ]
    cin >> number;

    // outputing the number via cout [spelled as "c out"]
    cout << number;

    // getch()  is required to get output in old compilers like Turbo C++

    return 0;

}