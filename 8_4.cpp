#include <bits/stdc++.h>
using namespace std;

class Hospital
{
private:
    int rlno;
    string name;

public:
    Hospital() {}
    void getData()
    {
        cout << "Enter roll no: ";
        cin >> rlno;
        cout << "Enter name: ";
        cin >> name;
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
    void getData()
    {
        cout << "Enter ward no: ";
        cin >> wno;
    }
    void display()
    {
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
    void getData()
    {

        cout << "Enter bed no: ";
        cin >> bedno;
        cout << "Enter nature of illness: ";
        cin >> natureOillness;
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
    Patient() {}
    void getData()
    {
        Hospital::getData();
        Ward::getData();
        Room::getData();
        cout << "------------------" << endl;
    }
    void display()
    {
        Hospital::display();
        Ward::display();
        Room::display();
        cout << "------------------" << endl;
    }
};

int main()
{
    Patient p[5];
    for (int i = 0; i < 5; i++)
    {
        p[i].getData();
    }
    for (int i = 0; i < 5; i++)
    {
        p[i].display();
    }
    return 0;
}