#include <iostream>
using namespace std;

class Array
{
    int s;
    int *p;

public:
    // Parameterized ctor
    Array(int size) : s(size)
    {
        cout << "Param ctor called " << endl;
        p = new int[s];
    }

    // copy ctor
    Array(const Array &x)
    {
        s = x.s;
        p = new int[s];
        for (int i = 0; i < s; i++)
        {
            p[i] = x.p[i];
        }
    }

    Array concate(const Array &arr) const
    {
        Array res(s + arr.s);

        for (int i = 0; i < s; i++)
        {
            res.p[i] = p[i];
        }

        for (int i = 0; i < arr.s; i++)
        {
            res.p[s + i] = arr.p[i];
        }

        return res;
    }

    // accept array elements
    void Accept()
    {
        cout << "Enter " << s << " elements:" << endl;
        for (int i = 0; i < s; i++)
        {
            cin >> p[i];
        }
    }

    // display array elements
    void display() const
    {
        for (int i = 0; i < s; i++)
        {
            cout << p[i] << " ";
        }
        cout << endl;
    }

    // Destructor
    ~Array()
    {
        cout << "dtor called " << endl;
        delete[] p;
    }
};

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
