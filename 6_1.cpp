#include <iostream>
using namespace std;

class Time
{
    int hr, min, sec;

public:
    void format();
    void getdata();
    void putdata();

    Time();
    Time(int h, int m, int s);
    Time(Time &t);
    ~Time();
};

Time::Time()
{
    hr = 12;
    min = 59;
    sec = 59;
}

Time::Time(int h, int m, int s = 52)
{
    hr = h;
    min = m;
    sec = s;
    format();
}

Time::Time(Time &t)
{
    hr = t.hr;
    min = t.min;
    sec = t.sec;
    format();
}

Time::~Time()
{
    cout << "Destructer Invoked" << endl;
}

void Time::format()
{
    if (sec >= 60)
    {
        min += sec / 60;
        sec %= 60;
    }
    if (min >= 60)
    {
        hr += min / 60;
        min %= 60;
    }
}

void Time::getdata()
{
    cin >> hr >> min >> sec;
    format();
}

void Time::putdata()
{
    cout << hr << ":" << min << ":" << sec << endl;
}

int main()
{
    Time t1;             // default constructor
    Time t2(12, 52, 45); // parameterized constructor
    Time t3(12, 52);     // parameterized constructor with default argument
    Time t4(t2);         // copy constructor
    Time t5 = t3;        // copy constructor

    t1.putdata();
    t2.putdata();
    t3.putdata();
    t4.putdata();

    return 0;
}