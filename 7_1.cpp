#include <iostream>
using namespace std;

class Number
{
    int num;

public:
    void input();
    void output();

    Number();
    Number(int);
    Number(Number &n);
};

Number::Number() { num = 0; }
Number::Number(int n) { num = n; }
Number::Number(Number &n) { num = n.num; }

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

    return 0;
}