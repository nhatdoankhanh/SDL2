#include<bits/stdc++.h>

using namespace std;

struct Point{
    int x, y;
};

Point add(Point a)
{
    a.x = a.x * 2;
    a.y = a.y * 2;
    return a;
}

Point add1(Point &a)
{
    a.x = a.x * 2;
    a.y = a.y * 2;
    return a;
}

int main()
{
    int _x, _y;
    cin >> _x >> _y;
    Point point;
    point.x = _x;
    point.y = _y;
    add1(point);
    cout << &(point.x) << " " << &(point.y);
}

