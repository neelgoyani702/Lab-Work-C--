#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
public:
    string breed;
    int legs = 4;
    bool horns;

    void canWalk()
    {
        cout << "Animal can walk" << endl;
    }
    void canEat()
    {
        cout << "Animal can eat" << endl;
    }
};

class Dog : public Animal
{
private:
public:
    Dog()
    {
        
    }
    void speak()
    {
        cout << "Can bark" << endl;
    }
};

class Human : public Animal
{
private:
public:
};

int main()
{
    Dog d1;
    d1.speak();
    cout << d1.legs << endl;
    d1.canEat();
    d1.canWalk();
    return 0;
}
