#include<bits/stdc++.h>

using namespace std;

int add1(int &x)
{
    cout << &x << endl;
    return x = x + x;
}
int add2(int x)
{
    cout << &x << endl;;
    return x = x + x;
}
int main()
{
    int x;
    cin >> x;
    add2(x);
    cout << &x << endl;
    add1(x);
    return 0;
    // dia chi bien x o ham add1() giong voi dia chi bien x o ham main
}
