#include <iostream>
using namespace std;

class Fahrenheit;

class Celsius
{
private:
    float cel;
    // friend class Fahrenheit;

public:
    Celsius() {}
    Celsius(float f)
    {
        cel = f;
    }
    Celsius(const Celsius &c)
    {
        cel = c.cel;
    }
    float getCel()
    {
        return cel;
    }
    void Display()
    {
        cout << "C = " << cel << endl;
    }
    operator Fahrenheit()
    {
        return Fahrenheit(cel);
    }
    // operator Fahrenheit();
};

class Fahrenheit
{
private:
    float fer;
    // friend class Celsius;

public:
    Fahrenheit() {}
    Fahrenheit(float f)
    {
        fer = f;
    }
    float getFer()
    {
        return fer;
    }
    void Display()
    {
        cout << "F = " << fer << endl;
    }
    operator Celsius()
    {
        return Celsius(fer);
    }
    // operator Celsius();
};

// Celsius::operator Fahrenheit()
// {
//     Fahrenheit f;
//     f.fer = cel;
//     return f;
// }

// Fahrenheit::operator Celsius()
// {
//     Celsius f;
//     f.cel = fer;
//     return f;
// }

int main()
{
    Celsius c1 = 10, c2 = 10;
    Fahrenheit f1, f2;
    // f1 = c1;
    c2 = f2;
    f1.Display();
    c2.Display();
    return 0;
}
