#include<bits/stdc++.h>

using namespace std;

struct Point
{
    int x, y;
    Point(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
};

struct Rect
{
    int x, y, w, h;
    Rect(int _x, int _y, int _w, int _h)
    {
        x = _x;
        y = _y;
        w = _w;
        h = _h;
    }
};

bool check(Point point, Rect rect)
{
    int ch = false ;
    if(point.x <= rect.x && point.x >= rect.x - rect.h && point.y >= rect.y && point.y <= rect.y + rect.w )
    {
        ch = true;
    }
    return ch;
}

int main()
{
   int num1, num2;
   cin >> num1 >> num2;
   Point point(num1, num2);
   int num3, num4;
   cin >> num1 >> num2 >> num3 >> num4;
   Rect rect(num1, num2, num3, num4);
   cout << check(point, rect);
}
