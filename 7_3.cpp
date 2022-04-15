#include <iostream>
#include <string>
using namespace std;

class String
{
private:
    string str;

public:
    String(string);
    void print_data();
    String operator+();
    bool operator==(int);
    String operator+=(int);
};

String::String(string s)
{
    str = s;
}

void String::print_data()
{
    cout << str << endl;
}

String String::operator+()
{
}
bool String::operator==()
{
}
String String::operator+=()
{
}

int main()
{

    return 0;
}