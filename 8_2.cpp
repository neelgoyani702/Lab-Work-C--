#include <bits/stdc++.h>
using namespace std;

class Medicine
{
private:
    string type;
    string nameOcompany;
    string date;

public:
    Medicine()
    {
        type = "";
        nameOcompany = "";
        date = "";
    }
    Medicine(string a, string b, string c)
    {
        type = a;
        nameOcompany = b;
        date = c;
    }
    void putdata(void)
    {
        cout << "type=" << type << endl;
        cout << "nameOcompany=" << nameOcompany << endl;
        cout << "date=" << date << endl;
    }
};

class Tablet : public Tablet
{
private:
    string nameOtablet;
    int qnt;
    int price;

public:
    Tablet(){};
    Tablet(string a, int b, int c)
    {
        nameOtablet = a;
        qnt = b;
        price = c;
    }
    void putdata(void)
    {

        cout << "nameOtablet=" << nameOtablet << endl;
        cout << "qnt=" << qnt << endl;
        cout << "price=" << price << endl;
    }
};

class syrup : public Medicine
{
private:
    float qnty;
    int dose;

public:
    syrup() {}
    syrup(float a, int b)
    {
        qnty = a;
        dose = b;
    }
    void putdata(void)
    {
        cout << "qnty=" << qnty << endl;
        cout << "dose=" << dose << endl;
    }
};

int main()
{

    Tablet t;
    syrup s;
    t("Xyz", 10, 20);
    

    return 0;
}