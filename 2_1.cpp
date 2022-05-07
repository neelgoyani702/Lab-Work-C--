#include <iostream>
#include <string>
using namespace std;

class ClgDetail
{

    string name, code, department;
    int intake;

public:
    void input()
    {
        cout << "++++++ Enter the Collage Information ++++++" << endl;
        cout << "Collage name: ";
        getline(cin, name);
        cout << "Collage code: ";
        getline(cin, code);
        cout << "Department: ";
        getline(cin, department);
        cout << "Department In-take: ";
        cin >> intake;
    }

    void output()
    {
        cout << "********* Collage Information *********" << endl;
        cout << "Name of the collage: " << name << endl;
        cout << "Collage University Code: " << code << endl;
        cout << "Name of Department: " << department << endl;
        cout << "The deparment of " << department << " has in-take " << intake << endl;
    }
};

int main()
{
    ClgDetail c;
    c.input();
    c.output();
    return 0;
}