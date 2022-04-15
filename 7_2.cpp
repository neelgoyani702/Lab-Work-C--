#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img;

    friend void operator-(Complex &c);

public:
    Complex();
    Complex(int r, int i);
    void print_data();
};

Complex::Complex(int r, int i)
{
    real = r;
    img = i;
}

void Complex::print_data()
{
    cout << real << " + " << img << " i" << endl;
}

void operator-(Complex &c)
{
    c.real = -c.real;
    c.img = -c.img;
}

int main()
{
    Complex c1(10, -2);
    c1.print_data();
    -c1;
    c1.print_data();
    return 0;
}