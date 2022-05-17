#include <bits/stdc++.h>
using namespace std;

int main()
{
    ofstream out("student.dat", ios::binary);
    if (!out)
    {
        cout << "Cannot open file!" << endl;
        return 1;
    }
    float heightIN[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter height: ";
        cin >> heightIN[i];
    }
    out.write((char *)&heightIN, sizeof(heightIN));
    out.close();

    ifstream in("student.dat", ios::binary);
    if (!in)
    {
        cout << "Cannot open file!" << endl;
        return 1;
    }
    float heightOUT[5];
    in.read((char *)&heightOUT, sizeof(heightOUT));
    for (int i = 0; i < 5; i++)
    {
        cout << "height = " << heightOUT[i] << endl;
    }
    in.close();
    return 0;
}
