#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img;

public:
    Complex(int r, int i);
    ~Complex();
    void print_data();
    void operator-();
};

Complex::Complex(int r, int i)
{
    real = r;
    img = i;
}

Complex::~Complex()
{
}

void Complex::print_data()
{
    cout << real << " + " << img << " i" << endl;
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