#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream out;
    out.open("data3.txt");
    //int p = out.tellp();
    //cout << p << endl;
    if (!out.good())
    {
        cout << "Cannot open file!" << endl;
        cout << "Know bit = " << out.good();
        //return 1;
    }
    return 0;
}
