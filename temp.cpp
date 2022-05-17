#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    ifstream infile;
    infile.open("silly.dat", ios::binary | ios::in);
    infile.read(&x, 7); // reads 7 bytes into a cell that is either 2 or 4
}
