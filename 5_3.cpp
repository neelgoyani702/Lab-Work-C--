#include <iostream>
using namespace std;

class Currency
{
    int rupee, paisa;

public:
    void enter();
    void calc();
    void show();
    Currency sum(Currency);
    void add(Currency, Currency);
};

void Currency::enter()
{
    cout << "Enter rupees and paisa: ";
    cin >> rupee >> paisa;
    calc();
}

void Currency::calc()
{
    if (paisa >= 100)
    {
        rupee += paisa / 100;
        paisa %= 100;
    }
}

Currency Currency::sum(Currency c)
{
    Currency cr;
    cr.rupee = rupee + c.rupee;
    cr.paisa = paisa + c.paisa;
    return cr;
}

void Currency::show()
{
    cout << "Rs. " << rupee << "." << paisa << endl
         << endl;
}

void Currency::add(Currency c1, Currency c2)
{
    rupee = c1.rupee + c2.rupee;
    paisa = c1.paisa + c2.paisa;
    calc();
}

int main(int argc, char const *argv[])
{
    Currency c1, c2, c3, c4;
    cout << "Currency object c1." << endl;
    c1.enter();
    c1.show();

    cout << "Currency object c2." << endl;
    c2.enter();
    c2.show();

    cout << "Currency object c3." << endl;
    c3.add(c1, c2);
    c3.show();

    cout << "Currency object c4." << endl;
    c4 = c3.sum(c2);
    c4.show();

    // c2.show();
    return 0;
}
