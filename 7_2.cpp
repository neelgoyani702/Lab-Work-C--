#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img;

public:
    Complex(int r, int i);
    void print_data();
    void operator-();
};

Complex::Complex(int r, int i)
{
    real = r;
    img = i;
}

void Complex::print_data()
{
    cout << real << " + " << img << " i" <<;
}

void Complex::operator-()
{
    real = -real;
    img = -img;
}

int main()
{
    Complex c1(10, -2);
    c1.print_data();
    -c1;
    c1.print_data();
    return 0;
}