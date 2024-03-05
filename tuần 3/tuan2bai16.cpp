#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if(a == 0 || b == 0) cout << "0";
    else
    {
        int d;
        int n = a, m = b;
        while(b > 0)
        {
            d = a % b;
            a = b;
            b = d;
        }
        cout << abs(m * n / a);
    }
}
