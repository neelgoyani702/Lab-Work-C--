#include <iostream>
using namespace std;

class Dist
{
    int feet;
    float inches;

public:
    void getData();
    void putData();
    void scal(Dist &d, float);
};

void Dist::getData()
{
    cout << "Enter feet and inches: ";
    cin >> feet >> inches;
}
void Dist::putData()
{
    cout << feet << "'-" << inches << "\"" << endl;
}
void Dist::scal(Dist &ds, float fac)
{
    if (fac != 0)
    {
        ds.feet *= fac;
        ds.inches *= fac;
    }
}

int main(int argc, char const *argv[])
{
    Dist d;
    d.getData();
    float scal;
    cout << "Enter scal: ";
    cin >> scal;
    d.scal(d, scal);
    d.putData();

    return 0;
}
