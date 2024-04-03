#include<bits/stdc++.h>

using namespace std;

int UCLN(int a, int b)
{
    if(b == 0) return a;
    return UCLN(b, a % b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << UCLN(a, b) << endl;
    if(UCLN(a, b) == 1) cout << "nguyen to cung nhau";
        else cout << "khong nguyen to cung nhau";
}
