#include <iostream>
using namespace std;

class Rectangle
{
    int width, hight;

public:
    void get_vlaues();
    void area();
};

void Rectangle::get_vlaues()
{
    cin >> width >> hight;
}

void Rectangle::area()
{
    cout << "Area is: " << (width * hight) << endl;
}

int main(int argc, char const *argv[])
{
    Rectangle r;
    r.get_vlaues();
    r.area();

    return 0;
}
