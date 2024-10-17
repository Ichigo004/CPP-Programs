#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

Student::Student() : rno(0), name(""), schoolName("CDAC"), address()
{
    cout << "Non Parameterized Constructor";
}
Student::Student(int rno, string name, Address address) : rno(rno), name(name), schoolName("CDAC"), address(address)
{
    cout << "Parameterized Constructor";
}
ostream &operator<<(ostream &os, const Student &s)
{
    return os << "Student  Roll Number is : " << s.rno << " Name is :" << s.name << " School Name :" << s.schoolName << " " << s.address << endl;
}
istream &operator>>(istream &is, Student &s)
{
    cout << "Enter a roll no " << endl;

    is >> s.rno;
    is.get();
    cout << "Enter name " << endl;
    getline(is, s.name);
    cout << "Enter Address" << endl;
    cin >> s.address;
}
