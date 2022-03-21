#include <iostream>
#include <string>
using namespace std;

class StuDetail
{
    int roll_no;
    string name;
    int cls;
    char div;

public:
    void input()
    {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter rool No.: ";
        cin >> roll_no;
        cout << "Enter class: ";
        cin >> cls;
        cout << "Enter div: ";
        cin >> div;
    }

    void output()
    {
        cout << "********* Student Information *********" << endl;
        cout << "Enter rool No.: " << roll_no << endl;
        cout << "Enter name: " << name << endl;
        cout << "Enter class: " << cls << endl;
        cout << "Enter div: " << div << endl;
    }

} S[5];

int main()
{
    for (int i = 0; i < 5; i++)
    {
        S[i].input();
        S[i].output();
    }
    return 0;
}
