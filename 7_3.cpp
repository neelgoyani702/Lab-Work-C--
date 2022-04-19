#include <iostream>
#include <string>
using namespace std;

class String
{
private:
    string str;

public:
    String() {}
    String(string);

    void print_data();
    String operator+(String);
    bool operator==(String);
    void operator+=(String);
};

String::String(string s)
{
    str = s;
}

void String::print_data()
{
    cout << str << endl;
}

String String::operator+(String s1)
{
    String s2;
    s2.str = str + s1.str;
    return s2;
}
bool String::operator==(String s)
{
    if (str == s.str)
        return true;
    else
        return false;
}
void String::operator+=(String s)
{
    str += s.str;
}

int main()
{
    String s1("jay"), s2("jay"), s3;
    s3 = s1 + s2;
    s3.print_data();
    cout << (s1 == s2) << endl;
    // s3.print_data();
    s1 += s3;
    s1.print_data();
    return 0;
}
