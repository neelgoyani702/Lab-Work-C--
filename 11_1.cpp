#include <bits/stdc++.h>
using namespace std;

int main()
{
    ofstream out;
    out.open("data.txt");
    int p = out.tellp();
    cout << p << endl;
    if (!out)
    {
        cout << "Cannot open file!" << endl;
        return 1;
    }
    string strIN = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // getline(cin, strIN);
    out << strIN;
    p = out.tellp();
    cout << p << endl;

    out.close();

    ifstream in("data.txt");
    // string strTMP, strOUT;
    // while (in.eof() == 0)
    // {
    //     in >> strTMP;
    //     strOUT.append(" " + strTMP); // appending temp string to actual string
    // }
    // reverse(strOUT.begin(), strOUT.end()); // Reversing string
    char ch;
    while (p--)
    {
        in.seekg(p);
        in >> ch;
        cout << ch;
    }
    // cout << strOUT;
    in.close();
    return 0;
}
