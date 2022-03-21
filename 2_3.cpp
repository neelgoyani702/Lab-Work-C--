#include <iostream>
using namespace std;

class Swap
{
    int a, b;

public:
    void inp()
    {
        cin >> a >> b;
    }
    void swap()
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    void print()
    {
        cout << "a = " << a << " and b = " << b << endl;
    }
};

int main()
{
    Swap n;
    Swap s1, s2;
    // cout << "Enter Two Numbers: ";
    // n.inp();

    // cout << "Before Swap" << endl;
    // n.print();

    // n.swap();

    // cout << "After Swap" << endl;
    // n.print();




    return 0;
}

// class num
// {
// public:
//     int a;
// };

// int main()
// {
//     num o1, o2;
//     cout << "Enter two numbers: ";
//     cin >> o1.a >> o2.a;
//     cout << "Before swap num1 = " << o1.a << " and num2 = " << o2.a << endl;
//     o1.a = o1.a + o2.a;
//     o2.a = o1.a - o2.a;
//     o1.a = o1.a - o2.a;
//     cout << "After swap num1 = " << o1.a << " and num2 = " << o2.a << endl;
// }