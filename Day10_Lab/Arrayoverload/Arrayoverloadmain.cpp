#include <iostream>
#include "Arrayoverload.h"
using namespace std;
int main()
{
    int s1, s2;

    cout << "Enter size of first array: ";
    cin >> s1;
    Array a(s1);

    a.Accept();

    cout << "Enter size of second array: ";
    cin >> s2;
    Array b(s2);

    b.Accept();

    Array c = a.concate(b);

    cout << "Concatenated array:" << endl;
    c.display();

    return 0;
}
