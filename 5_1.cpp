#include <iostream>
using namespace std;

struct Rectangle
{
    int width, hight;
    
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
    struct Rectangle r;
    r.get_vlaues();
    r.area();

    return 0;
}
