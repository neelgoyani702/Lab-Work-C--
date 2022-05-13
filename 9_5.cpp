#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
    float avg;

public:
    void virtual getdata() = 0;
    void putdata()
    {
        cout << avg << "\t";
    }
    Vehicle() {}
    Vehicle(float a) { avg = a; }
};

class Car : public Vehicle
{
    string fuel;
    int no_of_wheel;

public:
    Car() {}
    Car(float a) : Vehicle(a) {}
    void getdata()
    {

        cin >> fuel >> no_of_wheel;
    }
    void put_data()
    {
        putdata();
        cout << fuel << "\t" << no_of_wheel;
    }
};

class Truck : public Vehicle
{
    string fuel;
    int no_of_wheel;

public:
    Truck(float a) : Vehicle(a) {}
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
    // Car c[2];
    // Truck t[2];
    // for (int i = 0; i < 2; i++)
    // {
    //     c[i].getdata();
    // }
    // for (int i = 0; i < 2; i++)
    // {
    //     t[i].getdata();
    // }
    // for (int i = 0; i < 2; i++)
    // {
    //     c[i].put_data();
    // }
    // for (int i = 0; i < 2; i++)
    // {
    //     t[i].put_data();
    // }

    Car c1(20.2);
    c1.getdata();
    c1.put_data();

    Car c2(50.2);
    c2.getdata();
    c2.put_data();

    Truck t1(10.4);
    t1.getdata();
    t1.put_data();

    Truck t2(20.4);
    t2.getdata();
    t2.put_data();

    // Vehicle v;

    return 0;
}