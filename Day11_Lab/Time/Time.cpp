#include "Time.h"
#include <iostream>
using namespace std;
Time ::Time() : h(0), m(0), s(0)
{
        cout << "Non Parameterized Constructor" << endl;
}

Time ::Time(int h, int m, int s) : h(h), m(m), s(s)
{
        cout << "Parameterized Constructor" << endl;
}

void Time ::Accept()
{
        cout << "Enter Time in 24 Hour Format 0-23 Hrs" << endl;
        cout << "Enter Hour" << endl;
        cin >> h;
        cout << "Enter Min" << endl;
        cin >> m;
        cout << "Enter Seconds" << endl;
        cin >> s;

        // if((h < 0 && h >60 ) || (m < 0 && m >60 ) || (s < 0 && s > 60 ) ){
        //         Accept();
        //
}
Time Time ::operator+(Time t2)
{
        Time t3;
        t3.h = h + t2.h;
        if (t3.h > 23)
        {
                t3.h = t3.h % 24;
        }

        return t3;
}

Time Time ::operator-(Time t2)
{
        Time t3;
        t3.h = h - t2.h;
        if (t3.h < 0)
        {
                t3.h += 24;
        }

        return t3;
}
void Time ::Display()
{
        cout << "Time is " << h << ":" << m << ":" << s << endl;
}