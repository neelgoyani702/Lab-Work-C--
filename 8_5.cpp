#include <bits/stdc++.h>
using namespace std;
#define PI 3.14

class Shape
{
private:
    string shape_name;

public:
    void getData()
    {
        cout << "Enter shape name: ";
        cin >> shape_name;
    }
    void display()
    {
        cout << "Shape name = " << shape_name << endl;
    }
};

class Circle : public Shape
{
private:
    int r;

public:
    void getData()
    {

        cout << "Enter Radious: ";
        cin >> r;
    }
    void display()
    {
        cout << "Radious = " << r << endl;
    }
    int getR() { return r; }
};

class Area : public Circle
{
private:
    float area_of_circle;

public:
    void getData()
    {
        Shape::getData();
        Circle::getData();
    }
    void display()
    {
        Shape::display();
        Circle::display();
        cout << "Area of circle = " << PI * getR() * getR();
    }
};

int main()
{

    Area a;
    a.getData();
    a.display();

    return 0;
}