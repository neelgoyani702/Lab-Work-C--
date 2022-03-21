#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            cout << setw(3) << i * j;
        }
        cout << endl;
    }
    return 0;
}
