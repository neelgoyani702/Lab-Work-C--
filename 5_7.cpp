#include <iostream>
using namespace std;

class Land;

class Tiles
{
    float l, w, area2;
    int no_of_tiles;

public:
    void getData();
    void areaTile();
    void number_of_tiles(Land);
};

class Land
{
    float length, width, area1;
    friend void Tiles::number_of_tiles(Land l1);

public:
    void getData();
    void putData();
    void areaLand();
};

void Land::getData()
{
    cout << "Enter length and width: ";
    cin >> length >> width;
}

void Land::putData()
{
    cout << "Length of Land = " << length << "width of Land = " << width << endl;
}

void Land::areaLand()
{
    area1 = length * width;
    cout << "Area of Land = " << area1 << endl;
}

void Tiles::getData()
{
    cout << "Enter height and width of tiles: ";
    cin >> l >> w;
    area2 = l * w;
}

void Tiles::number_of_tiles(Land l1)
{
    no_of_tiles = l1.area1 / area2;
    cout << "No of required tiles = " << no_of_tiles << endl;
}

int main()
{
    Land l;
    l.getData();
    l.areaLand();

    Tiles t;
    t.getData();
    t.number_of_tiles(l);
    return 0;
}
