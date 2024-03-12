#include<bits/stdc++.h>

using namespace std;

struct Point{
    int x, y;
};

int main()
{
    int _x, _y;
    cin >> _x >> _y;
    Point point;
    point.x = _x;
    point.y = _y;
    cout << &(point.x) << " " << &(point.y);
}
