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
    cout << Ship.id;
    cout << Ship.toado.x << " " << Ship.toado.y;
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
    Ship.move1();
    cout << Ship.toado.x << " " << Ship.toado.y;
}
