#include <iostream>
using namespace std;
class BaseClass
{
public:
    int b;
    void show()
    {
        cout << "b = " << b << endl;
    }
};
class DrivedClass : public BaseClass
{
public:
    int d;
    void show()
    {
        cout << "b = " << b << endl;
        cout << "d = " << d << endl;
    }
};
int main()
{
    BaseClass *bptr;
    BaseClass base;
    bptr = &base;
    bptr->b = 100;
    cout << "bptr poins to base objects" << endl;
    bptr->show();
    DrivedClass derived;
    bptr = &derived;
    bptr->b = 200;
    ((DrivedClass *)bptr)->d = 300; // wont work
    cout << "bptr now points to derived object" << endl;
    bptr->show();
    DrivedClass *dptr;
    dptr = &derived;
    dptr->d = 300;
    cout << "Dptr is derived type pointer" << endl;
    dptr->show();
    return 0;
}
