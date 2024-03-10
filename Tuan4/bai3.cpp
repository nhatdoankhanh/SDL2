
#include<bits/stdc++.h>

using namespace std;

struct Point{
    double x, y;
};

Point trungDiem(const Point a, const Point b)
{
    Point c;
    c.x = (a.x + b.x) / 2;
    c.y = (a.y + b.y) / 2;
    return c;
}
int main()
{
    int num1, num2, num3, num4;
    cin >> num1 >> num2 >> num3 >> num4;
    Point a, b;
    a.x = num1;
    a.y = num2;
    b.x = num3;
    b.y = num4;
    Point c = trungDiem(a,b);
    cout << c.x << " " << c.y;

}
