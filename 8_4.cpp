#include <bits/stdc++.h>
using namespace std;

class Hospital
{
private:
    int rlno;
    string name;

public:
    Hospital() {}
    Hospital(int a, string s)
    {
        rlno = a;
        name = s;
    }
    void display()
    {
        cout << "roll no = " << rlno << endl;
        cout << "name = " << name << endl;
    }
};

class Ward : virtual public Hospital
{
private:
    int wno;

public:
    Ward() {}
    Ward(int w) { wno = w; }
    void display()
    {
        Hospital::display();
        cout << "Ward no = " << wno << endl;
    }
};

class Room : virtual public Hospital
{
private:
    int bedno;
    string natureOillness;

public:
    Room() {}
    Room(int a, string n)
    {
        bedno = a;
        natureOillness = n;
    }
    void display()
    {
        cout << "Bed no = " << bedno << endl;
        cout << "nature of illness = " << natureOillness << endl;
    }
};

class Patient : public Ward, public Room
{
private:
public:
    void display()
    {
        Ward::display();
        Room::display();
    }
};

int main()
{

    return 0;
}