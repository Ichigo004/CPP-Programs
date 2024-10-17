#include "Time.h"
#include <iostream>
using namespace std;
int main()
{
    Time t1;
    t1.Accept();
    cout << "Time 1 : ";
    t1.Display();

    Time t2;
    t2.Accept();
    cout << "Time 2 : ";
    t2.Display();

    Time t3;

    t3 = t1 + t2;
    cout << "Adding T1 and T2" << endl;
    t3.Display();

    t3 = t1 - t2;
    cout << "Subtracting T1 and T2" << endl;
    t3.Display();

    return 0;
}