#include <bits/stdc++.h>
using namespace std;

int main()
{
    ofstream out;
    out.open("data.txt");

    string strIN = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // getline(cin, strIN);
    out << strIN;

    out.close();

    ifstream in("data.txt");

    string strOUT, strTMP;
    while (in.eof() == 0)
    {
        in >> strTMP;
        strOUT.append(" " + strTMP); // appending temp string to actual string
    }

    reverse(strOUT.begin(), strOUT.end()); // Reversing string
    cout << strOUT;
    in.close();
    return 0;
}
