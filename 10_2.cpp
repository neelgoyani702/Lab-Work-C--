#include <bits/stdc++.h>
using namespace std;

ostream &rpm(ostream &obj)
{
    cout << fixed << setprecision(2);
    cout << "Rs. ";
    return obj;
}

int main()
{
    float amount;
    cin >> amount;
    cout << rpm << amount;
    return 0;
}
