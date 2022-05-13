#include <bits/stdc++.h>
using namespace std;

class Media
{
private:
    string title;
    float price;

public:
    Media() {}
    Media(string t, int p)
    {
        title = t;
        price = p;
    }
    virtual void display()
    {
        cout << "Title = " << title << endl;
        cout << "price = " << price << endl;
    }
};

class Book : public Media
{
private:
    int pgCount;

public:
    Book() {}
    Book(string t, int p, int pg) : Media(t, p)
    {
        pgCount = pg;
    }
    void display()
    {
        Media::display();
        cout << "Page COunt = " << pgCount << endl;
    }
};

class Tape : public Media
{
private:
    float playingTime;

public:
    Tape() {}
    Tape(string t, int p, float pt) : Media(t, p)
    {
        playingTime = pt;
    }
    void display()
    {
        Media::display();
        cout << "Playing time in min = " << playingTime << endl;
    }
};

int main()
{
    string s1;
    int a1, b1;
    cin >> s1 >> a1 >> b1;
    Book b(s1, a1, b1);
    b.display();

    string s2;
    int a2;
    float b2;
    cin >> s2 >> a2 >> b2;
    Tape t(s2, a2, b2);
    t.display();

    return 0;
}