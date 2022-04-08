#include <iostream>
#include <string>
#define N 4
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

int Gate::ECV_Cnt = 0;
int Gate::ECS_Cnt = 0;
int Gate::ECA_Cnt = 0;

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
    else if (examCenter == 'S')
        ECS_Cnt++;
    else if (examCenter == 'A')
        ECA_Cnt++;
}

void Gate::getCount()
{
    cout << endl
         << "Vadodara count: " << ECV_Cnt << endl
         << "Surat count: " << ECS_Cnt << endl
         << "Ahmedabad count: " << ECA_Cnt << endl;
}

void Gate::putData()
{
    cout << endl
         << "Registration no.: " << reg_no << endl
         << "Name: " << name << endl
         << "Exam Center: " << examCenter << endl;
}

int main(int argc, char const *argv[])
{
    Gate s[N];
    for (int i = 0; i < N; i++)
        s[i].getData();
    for (int i = 0; i < N; i++)
        s[i].putData();
    Gate::getCount();
    return 0;
}
