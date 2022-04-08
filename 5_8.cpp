#include "bits/stdc++.h"
using namespace std;

class Parent;

class Child
{
    string name;
    char gender;
    friend class Parent;

public:
    void getData();
    void printData();
};

void Child::getData()
{
    cout << "enter name and gender: ";
    getline(cin, name);
    cin >> gender;
}
void Child::printData()
{
    cout << "Name of child: " << name << endl;
    cout << "Gender of child: " << gender << endl;
}

class Parent
{
    string childName;
    char childGender;

public:
    void ReadChildData(Child);
    void DisplayChildData();
};

void Parent::ReadChildData(Child c)
{
    childName = c.name;
    childGender = c.gender;
}

void Parent::DisplayChildData()
{
    cout << "Name of child: " << childName << endl;
    cout << "Gender of child: " << childGender << endl;
}

int main()
{
    Child c;
    Parent p;
    c.getData();
    p.ReadChildData(c);
    p.DisplayChildData();
    return 0;
}