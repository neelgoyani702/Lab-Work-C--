#include <iostream>
using namespace std;

class Number
{
    int num;

public:
    void input();
    void output();
    Number operator++(void);
    Number operator++(int);
    Number operator-();

    Number();
    Number(int);
    Number(Number &n);
};

Number::Number() { num = 0; }
Number::Number(int n) { num = n; }
Number::Number(Number &n) { num = n.num; }

Number Number::operator++(void)
{
    ++num;
    return *this;
}

Number Number::operator++(int)
{
    num++;
    return *this;
}

Number Number::operator-()
{
    num = -num;
    return *this;
}

void Number::input()
{
    cout << "Enter number: ";
    cin >> num;
}

void Number::output()
{
    cout << "Number = " << num << endl;
}

int main()
{
    Number n1;
    Number n2(5);
    Number n3 = n2;
    Number n5;
    n5 = n2++;
    n5 = ++n2;

    n1.output();
    n2.output();
    n3.output();
    n5.output();
    return 0;
}
