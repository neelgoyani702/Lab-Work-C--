#include <iostream>
#include <cmath>
using namespace std;

// double power(double, int p = 2);
inline double power(double b = 3, int p = 2)
{
    return pow(b, p);
}

int main()
{
    double ans = power(71564.5545, 24);
    cout << ans << endl;

    ans = power(2);
    cout << ans << endl;

    double x = 10;
    cin >> x;
    ans = power(x);
    cout << ans << endl;

    ans = power();
    cout << ans << endl;

    return 0;
}
