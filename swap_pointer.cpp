#include <iostream>
using namespace std;

void swapp(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main()
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Before swap x=" << x << " y=" << y << endl;
    swapp(&x, &y);
    cout << "After swap x=" << x << " y=" << y << endl;

    return 0;
}
