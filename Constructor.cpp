#include <iostream>
using namespace std;

class ABC
{
    int a;

public:
    ABC()
    {
        cout << "Constructor of ABC" << endl;
    }
    ABC(int n)
    {
        cout << "parameterized Constructor of ABC" << endl;
        a = n;
    }

    friend class XYZ;
};

class XYZ
{
    int x;

public:
    XYZ()
    {
        ABC a1;
        cout << "Constructor of XYZ" << endl;
    }
    XYZ(int n)
    {
        cout << "parameterized Constructor of XYZ" << endl;
        x = n;
    }
};

int main()
{
    XYZ x1;
    // ABC a2 = x1;
    XYZ x2(3);
    return 0;
}