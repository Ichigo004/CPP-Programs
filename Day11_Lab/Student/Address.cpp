#include "Address.h"
#include <iostream>
Address ::Address() : flatNo(""), city(""), pin("")
{
    cout << "Non parameterized Constructor";
}

Address ::Address(string flatNo, string city, string pin) : flatNo(flatNo), city(city), pin(pin)
{
    cout << "parameterized Constructor";
}

istream &operator>>(istream &is, Address &a)
{
    cout << "Enter your flat No" << endl;
    is >> a.flatNo;

    cout << "Enter your City Name" << endl;
    is >> a.city;

    cout << "Enter your pincode" << endl;
    is >> a.pin;

    return is;
}

ostream &operator<<(ostream &os, const Address &a)
{
    return os << "Address is Flat NO " << a.flatNo << " city " << a.city << " Pincode " << a.pin << endl;
}
