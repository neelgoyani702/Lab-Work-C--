#include <iostream>
#include <string>
using namespace std;

class Batsman
{
    string name;
    int bcode, innings, not_out, runs;
    float batting_avg;
    void calcavg();

public:
    void getData();
    void putData();
};

void inline Batsman::calcavg()
{
    batting_avg = (float)runs / (innings - not_out);
}

void inline Batsman::getData()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter bcode: ";
    cin >> bcode;
    cout << "Enter innings: ";
    cin >> innings;
    cout << "Enter not_out: ";
    cin >> not_out;
    cout << "Enter runs: ";
    cin >> runs;
    calcavg();
}

void inline Batsman::putData()
{
    cout << endl
         << "Name: " << name << endl
         << "Bcode: " << bcode << endl
         << "Innings: " << innings << endl
         << "Not out: " << not_out << endl
         << "Batting average: " << batting_avg << endl;
}

int main(int argc, char const *argv[])
{
    Batsman b1;
    b1.getData();
    b1.putData();

    return 0;
}
