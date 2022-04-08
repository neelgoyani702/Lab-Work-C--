#include <iostream>
using namespace std;

class Date
{
    int dd, mm, yyyy;
    friend void swapDate(Date &d1, Date &d2);

public:
    void getData();
    void putData();
};

void Date::getData()
{
    cout << "Enter date: ";
    cin >> dd >> mm >> yyyy;
}
void Date::putData()
{
    cout << dd << "-" << mm << "-" << yyyy << endl;
}

void swapDate(Date &d1, Date &d2)
{
    Date tmp;
    tmp = d1;
    d1 = d2;
    d2 = tmp;
}

int main(int argc, char const *argv[])
{
    Date d1, d2;
    d1.getData();
    d2.getData();
    cout << "Before swap" << endl;
    cout << "Date d1: ";
    d1.putData();
    cout << "Date d2: ";
    d2.putData();
    swapDate(d1, d2);
    cout << "After swap" << endl;
    cout << "Date d1: ";
    d1.putData();
    cout << "Date d2: ";
    d2.putData();
    return 0;
}
