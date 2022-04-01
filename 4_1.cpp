#include <iostream>
using namespace std;

int divide(int a, int b);
int divide(int a);
float divide(float a, float b, float c);

int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Enter two number: ";
    cin >> a >> b;
    if (divide(a, b) == 0)
        cout << a << " is divisible by " << b << endl;
    else
        cout << a << " is not divisible by " << b << endl;

    int c;
    cout << "Enter a number: ";
    cin >> c;
    if (divide(c) == 0)
        cout << c << " is not prime" << endl;
    else
        cout << c << " is prime" << endl;

    float x, y, z;
    cout << "Enter three float number: ";
    cin >> x >> y >> z;
    float avg = divide(x, y, z);

    cout << "average of " << z << " " << y << " " << x << " "
         << "is " << avg;
    return 0;
}

inline int divide(int a, int b)
{
    if (a % b == 0)
        return 0;
    else
        return 1;
}

inline int divide(int a)
{
    int flag = 1;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            flag = 0;
            break;
        }
        else
            flag = 1;
    }
    return flag;
}

inline float divide(float a, float b, float c)
{
    float ans = (a + b + c) / 3.0;
    return ans;
}
