#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
    float avg;

public:
    void virtual getdata() = 0;
    void putdata()
    {
        cout << avg << endl;
    }
};

class Car : public Vehicle
{
    string fuel;
    int no_of_wheel;

public:
    void getdata()
    {
        cin >> fuel >> no_of_wheel;
    }
    void put_data()
    {
        cout << fuel << no_of_wheel;
    }
};

class Truck : public Vehicle
{
    string fuel;
    int no_of_wheel;

public:
    void getdata()
    {
        cin >> fuel >> no_of_wheel;
    }
    void put_data()
    {
        cout << fuel << no_of_wheel;
    }
};

int main()
{
    Car c[2];
    Truck t[2];
    for (int i = 0; i < 2; i++)
    {
        c[i].getdata();
    }
    for (int i = 0; i < 2; i++)
    {
        t[i].getdata();
    }
    for (int i = 0; i < 2; i++)
    {
        c[i].put_data();
    }
    for (int i = 0; i < 2; i++)
    {
        t[i].put_data();
    }
    return 0;
}