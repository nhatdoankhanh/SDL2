#include<bits/stdc++.h>

using namespace std;

struct rect{
    int x, y;
};
struct ship
{
    rect toado;
    string id;
    int dx, dy;
    rect move1()
    {
        toado.x += dx;
        toado.y += dy;
        return toado;
    }
};

void display(ship& Ship)
{
    cout << Ship.id << endl;
    cout << Ship.toado.x << " " << Ship.toado.y << endl;
}


int main()
{
    int _x, _y, _dx, _dy;
    string s;
    cin >> _x >> _y >> s >> _dx >> _dy;
    ship Ship;
    Ship.toado.x = _x;
    Ship.toado.y = _y;
    Ship.id = s;
    Ship.dx = _dx;
    Ship.dy = _dy;
    int _x1, _y1, _dx1, _dy1;
    string s1;
    cin >> _x1 >> _y1 >> s1 >> _dx1 >> _dy1;
    ship Ship1;
    Ship.toado.x = _x1;
    Ship.toado.y = _y1;
    Ship.id = s1;
    Ship.dx = _dx1;
    Ship.dy = _dy1;
    int loop = 0;
    while (loop < 10) {
    Ship.move1(); Ship1.move1();
    display(Ship); display(Ship1);
    cout << endl;
    loop++;
}



}

