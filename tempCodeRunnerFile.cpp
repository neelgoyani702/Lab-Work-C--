#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float n1, n2, *ptr1, *ptr2;
    cout << "Enter number a & b : ";
    cin >> n1 >> n2;
    ptr1 = &n1;
    ptr2 = &n2;
    cout << "Addition is " << setprecision(2) << (*ptr1) + (*ptr2) << endl;
    return 0;
}
