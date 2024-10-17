#include <string>
#include <iostream>
using namespace std;
class Address
{
    string flatNo;
    string city;
    string pin;

public:
    Address();
    Address(string, string, string);
    friend ostream &operator<<(ostream &os, const Address &s);
    friend istream &operator>>(istream &is, Address &s);
};