#include <iostream>
using namespace std;
int main()
{
    int no1 = 10, no2 = 12;
    int &x = no1;
    int &r = no2;
    int &c = no1;
    // int &d[2] = {no1, no2};
    x = 75;
    cout << "no1=" << no1 << endl;
    cout << "x = " << x + 20;
    cout << "no1=" << no1 + 10;
    return 0;
}
