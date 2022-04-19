#include <iostream>
using namespace std;

class Celsius
{
private:
    float t;

public:
    Celsius();
    Celsius(float n);
    Celsius(const Celsius &c);
    void display();
    operator float()
    {
        float a = t;
        return a;
    }
};

Celsius::Celsius()
{
    t = 0;
}

Celsius::Celsius(float n)
{
    t = n;
}

Celsius::Celsius(const Celsius &c)
{
    t = c.t;
}

void Celsius::display()
{
    cout << t << endl;
}

int main()
{
    Celsius c1;
    float temp = 30.5;
    c1 = 30.5;         // Basic to class type conversion
    Celsius c3 = temp; // Basic to class type conversion
    c1.display();
    c3.display();

    // Class to basic type conversion
    float te = c1;
    cout << te << endl;
    return 0;
}
