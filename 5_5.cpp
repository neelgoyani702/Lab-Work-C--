#include <iostream>
#include <string>
using namespace std;

class Gate
{
    int reg_no;
    string name;
    char examCenter;
    static int ECV_Cnt, ECS_Cnt, ECA_Cnt;

public:
    void getData();
    void putData();
    static void getCount();
};

int Gate::ECV_Cnt, ECS_Cnt, ECA_Cnt;

void Gate::getData()
{
    cout << "Enter registration no.: ";
    cin >> reg_no;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter first letter of exam center: ";
    cin >> examCenter;

    if (examCenter == 'V')
        ECV_Cnt++;
    if (examCenter == 'S')
        ECS_Cnt++;
    if (examCenter == 'A')
        ECA_Cnt++;
}

void Gate::getCount()
{
    cout << "Vadodara count: " << ECV_Cnt << endl
         << "Surat count: " << ECS_Cnt << endl
         << "Ahmedabad count: " << ECA_Cnt << endl;
}

void Gate::putData()
{
    cout << "Registration no.: " << reg_no << endl;
    cout << "Name: " << name << endl;
    cout << "Exam Center: " << examCenter << endl;
}

int main(int argc, char const *argv[])
{
    Gate s1, s2;
    s1.getData();
    s2.getData();
    s2.getCount();
    return 0;
}
