#include <iostream>
using namespace std;

class Alpha
{
private:
    int x;

public:
    Alpha() {}
    Alpha(int a) { x = a; }
    void display()
    {
        cout << "x = " << x << endl;
    }
};

class Beta
{
private:
    int y;

public:
    Beta() {}
    Beta(int b) { y = b; }
    void display()
    {
        cout << "y = " << y << endl;
    }
};

class Gamma : public Alpha, public Beta
{
private:
    int m, n;

public:
    Gamma() {}
    Gamma(int a, int b, int x, int y) : Alpha(a), Beta(b)
    {
        m = x;
        n = y;
    }

    void display()
    {
        Alpha::display();
        Beta::display();
        cout << "m = " << m << endl;
        cout << "n = " << n << endl;
    }
};

int main()
{
    Gamma G(10, 20, 30, 40);
    G.display();
    return 0;
}