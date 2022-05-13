#include <bits/stdc++.h>
using namespace std;

class Vehical
{
private:
    float avg;

public:
    virtual void getdata() = 0;
    void putdata()
    {
        cout << "Enter average: ";
        cin >> avg;
    }
};

class Car : public Vehical
{
private:
    string fuel;
    int ty;

public:
};

class Truck : public Vehical
{
private:
    string fuel;
    int ty;

public:
};

int main()
{

    return 0;
}