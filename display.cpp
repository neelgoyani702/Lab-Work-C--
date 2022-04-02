#include <iostream>
#define PI 3.1415926535897932384626433
using namespace std;

// area
void display(float a, float b)
{
    double area = a * b;
    cout << "area = " << area << endl;
}

// average of four
void display(int a, int b, int c, int d)
{
    double avg = (double)(a + b + c + d) / 4.0;
    cout << "average = " << avg << endl;
}

// volume
void display(float l, float b, float h)
{
    double volume = l * b * h;
    cout << "volume = " << volume << endl;
}

// perimeter
void display(float r)
{
    double pr = 2 * PI * r;
    cout << "perimeter = " << pr << endl;
}

int main(int argc, char const *argv[])
{
    display(3.1, 4.0);
    display(10, 20, 30, 37);
    display(35.00, 26.3, 10.25);
    display(14.25);
    return 0;
}
